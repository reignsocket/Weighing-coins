
Problem Description  
Saili has 12 silver coins. There are 11 real coins and 1 counterfeit currency. Counterfeit money does not look the same as real money, but the weight is different. But Sail does not know whether counterfeit money is lighter or heavier than real money. So he borrowed a balance from his friend. A friend hopes that Saili can find the counterfeit currency three times and determine whether the counterfeit currency is light or heavy. For example, if the game uses a balance to weigh two coins, it is found that the balance is balanced, indicating that both are true. If the game compares one real coin with another silver coin, it is found to be lighter or heavier than the real coin, indicating that it is a counterfeit currency. After careful scheduling of each weighing, Sally guarantees to determine the counterfeit currency after weighing three times.
Input data
The input has three rows, each row representing the result of a weighing. Saili has previously designated the silver coin as A-L. Results of each weighing
Use three space-separated strings to represent: Coins placed on the left side of the balance Balanced coins placed on the right side of the balance. The balance state is represented by "up", "down", or "even", which are high at the right end, low at the right end, and balanced. The number of coins around the balance is always equal.
Output requirements:
The silver coin that outputs which label is a counterfeit currency and indicates whether it is lighter or heavier than the real coin.  
  
Input sample  
1  
ABCD EFGH even  
ABCI EFJK up  
ABIJ EFGH even 
  
Output sample  
K is the counterfeit coin and it is light.  
  
Problem solving  
In this question, Cyri has designed the correct weighing scheme to ensure that the only answer can be obtained from the three sets of weighing data. The answer can be represented by two variables: x  the counterfeit currency label, w  counterfeit currency is lighter than the real coin or more than the real currency. There are 12 guesses for x; w has 2 guesses. According to the weighing scheme designed by Sally, among the 24 guesses of (x, w), only the only guess is not contradictory to the three sets of weighing data. Therefore, if the guess (x, w ) satisfies the following conditions, this guess is the answer to be found:
 On both sides of the balance where the weighing result is "even", x does not appear;  
 If w indicates that the counterfeit currency is lighter than the real coin, x must appear on the right side of the balance with the weighing result "up", and must appear on the left side of the balance with the weighing result "down".
  
 If w indicates that the counterfeit currency is heavier than the real currency, x must appear on the left side of the balance with the weighing result "up", and must appear on the right side of the balance with the weighing result "down".
When implementing it, pay attention to two points:  
1) Choose the appropriate algorithm for each coin x to try one by one:  
 Is x guessing lighter than real money? If the guess is established, the output will be output.  
 Is x guessing more than real money? If the guess is established, the output will be output.  
2) Choosing the right data structure  
Stores the result of the weighing as an array of strings. There is a maximum of 6 coins around the balance each time we weigh. Therefore, the word
The length of the string needs to be 7, the last bit stores the end of the string '\0', which is convenient for using strings in the program code.
Operation function.  
Char left[3][7], right[3][7], result[3][7];  
