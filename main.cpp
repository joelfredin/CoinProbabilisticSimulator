#include<iostream>
#include<random>

int main()
{
    // Seed the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> dis(0,1);

    // Simulate 10 coin tosses
    for(int i = 0; i < 10; i++)
    {
        // Generate a random number between 0 and 1
        double result = dis(gen);


        // Determine the outcome of the coin toss
        std::string outcome = (result < 0.5) ? "heads" : "tails";

        // Print the outcome of the coin toss
        std::cout << "Coin toss " << i + 1 << ": " << outcome << std::endl;
    }


    return 0;
}