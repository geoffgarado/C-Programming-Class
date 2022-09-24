#include <iostream>

using namespace std;

// the while loop loops through a block of code as long as the conduition is true

int main(){
  int x = 0;
  while (x < 5){
    cout << x << endl;
    x++;
  }

  /* The do/while loop is a variant of the while loop. This loop will execute 
   * the code block once, before checking if the condition is true, then it 
   * will repeat the loop as long as the condition is true.
  */

  int y = 0;
  do {
    cout << y << endl;
    y++;
  }
  while (y < 5);

  /* When you know exactly how many times you want to loop through a block of 
   * code, use the for loop instead of a while loop.
  */

  for (int z = 0, z < 5, z++){
    cout << z << endl;
  }
  // Statement 1: int z = 0
    // is executed (one time) before the execution of the code block.
  // Statement 2: z < 5
    // defines the condition for executing the code block. 
  // Statement 3: z++
    //  is executed (every time) after the code block has been executed.
  
  // Using the break statement in the for loop.

  for (int numnum = 0, numnum < 10, numnum++){
    if (numnum == 4){
      break;
    }
    cout << "Stopped at: " << numnum;
  }

  for (int nomnom = 0, nomnom < 10, nomnom++){
    if (nomnom == 4){ // if nomnom is equal to 4 the loop will continue
      continue;
    }
    cout << "Your nomnom factor is: "nomnom << endl;
  }

  return 0;
}

