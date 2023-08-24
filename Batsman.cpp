#include<iostream>
#include<string>

using namespace std;

class Batsman // Batsman class
{
	private:
		int player_number;
		int best_score;
		int worst_score;
		
		void update_best(int y) // Method for updating the best score
		{
			if (y > best_score)
			{
				best_score = y;
			}
		}
		
		void update_worst(int z) // Method for updating the worst score
		{
			if (z < worst_score)
			{
				worst_score = z;
			}
		}
		
	public:
		Batsman(int n, int b, int w) 
		{
			player_number = n;
			best_score = b;
			worst_score = w;
		}
		
		void update(int x) // Method for updating the scores
		{
			update_best(x);
			update_worst(x);
			cout<< "The scores have been updated" << endl;
		}
		
		void display() // Method for displaying the scores
		{
			cout << "Highest score: " << best_score << endl;
			cout << "Lowest score: " << worst_score << endl;
		}
};

main()
{
	Batsman bm(123, 34, 100); // Batsman Object
	bm.display();
	bm.update(32);
	bm.display();
	bm.update(150);
	bm.display();
}
