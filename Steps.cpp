// Jan Leo B.Egamen
#include <iostream>
#include <conio.h>
using namespace std;
int Weeks,steps[200][7];
int step2[500] ;// temporary storage for function ascending
int temp[200][7] ;// temporary storage for SEQUENTIAL SEARCH to 
                  // -store temporary values of elements not asceneded for index of the element

//Jan LEo Egamen
void Setter(int temp[][7], int steps[][7], int Weeks){
        // input for every day
        for (int c = 0; c<Weeks; c++){
            for (int d = 0; d<7; d++){
                cout << "Enter steps for week "<< c + 1 << " day " << d + 1 << " :";
                cin >> steps[c][d];  
            }
            cout << endl;
        }

        for (int a = 0; a<Weeks; a++){
            for (int b = 0; b<7; b++){
               temp[a][b] = steps[a][b];
            }
        }

}
// with return and arg,function to display total of steps
int TotalStepsProcess(int steps[][7], int Weeks){
    int TotalSteps = 0;
                //Process to get the sum of the steps
        for (int a = 0; a<Weeks; a++){
            for (int b = 0; b<7; b++){
                TotalSteps += steps[a][b];
            }
        }//output the steps
        return TotalSteps;
}
// with return and arg, function to display total of even steps
int TotalEvenStepsProcess(int steps[][7], int Weeks){
    int TotalofEvenSteps = 0;        
        // Total of even numbers
        for (int e = 0; e<Weeks; e++){
            for (int f = 0; f<7; f++){
                if(steps[e][f]%2==0){
                TotalofEvenSteps += steps[e][f];
                }
            }
        }
        return TotalofEvenSteps;
}
// no return and with arg, function to display all elements
void DisplayallElements(int temp[][7], int Weeks){
    cout << "All Inputted ellements are: "<< endl;
            for (int g = 0; g<Weeks; g++){
                for (int h = 0; h<7; h++){
                    cout << temp[g][h] << " ";
                }
                cout << endl;
            }
}

float StepsToLossPoundTotal(int steps[][7], int Weeks){
    float poundlossTotal=0, totalsteps=0;
    for (int g = 0; g<Weeks; g++){
                for (int h = 0; h<7; h++){
                    totalsteps += steps[g][h];
                }
            }
            poundlossTotal = totalsteps/2000;
            return poundlossTotal;

}

// output elements in Ascending order 
void Ascending(int steps[][7], int step2[100], int Weeks){
            int temp2= 0, l=0;

        for (int i = 0; i < Weeks; i++) {
          for (int j = 0; j < 7; j++) {
            step2[l]= steps[i][j]; // storing all 2d ellements in 1d elements to do easy bubble sort
            l++;                    // i have created 1d array here para po maprint yung buong input sa
        }                            // 2d array na magkakasama disregarding per week but in input.
    }
        // bubble sort for 1 d array
        for (int i = 0; i < l - 1; i++) {
          for (int j = 0; j < l - i - 1; j++) {
            if (step2[j] > step2[j+1]) {
                // swap adjacent elements
                int temp2 = step2[j];
                step2[j] = step2[j+1];
                step2[j+1] = temp2;
            }
        }
    }
    // outputting sorted elements from 1 d aray(overall) 
    cout << "All sorted array in ascending order is: "<< endl;
    for (int i = 0; i < l; i++) {
        cout << step2[i] << " ";
    }
    cout << endl;

    // insertion sort for each row using 2d array to output per week
    cout << endl <<  "By Week sorted array in ascending order is: ";
    for (int i = 0; i < Weeks; i++) {
        for (int j = 1; j < 7; j++) { // this sorting method is for 2d arrays naman
            int key = steps[i][j];    // para naman ito sa pag ooutput ng sorted arrays 
            int k = j - 1;            // na per week lang  
            while (k >= 0 && steps[i][k] > key) {
                steps[i][k + 1] = steps[i][k];
                k--;
            }
            steps[i][k + 1] = key;
        }
    }
    for (int i = 0; i < Weeks; i++) {
        cout << endl << "Week " << i+1 << ": " << endl;
        for (int j = 0; j < 7; j++) {
            cout << steps[i][j] << " ";
        }
    }

/* // using bubble sort for 2 d array
    for (int c = 0; c < Weeks; c++)
    {
        for (int a = 0; a < 7; a++)
        {
            for (int s = a+1; s < 7; s++)// this is another kind of sorting method
            {                              // bubble sort
                if (steps[c][a] > steps[c][s])
                {
                    int temp  = steps[c][a];
                    steps[c][a] = steps[c][s];
                    steps[c][s] = temp;
                }
            }
        }
    }
*/
}

// sequential search
int SequantialSearch(int steps[][7], int num, int Weeks){
    int reps = 0; // Sequential search 
        for (int a = 0; a<Weeks; a++){
            for (int b = 0; b<7; b++){
                if(num==steps[a][b]){
                    reps++;// to count the occurrence of an ellement
                }
            }
        }
            return reps;
}

// to search the index and output in Sequential search 
// i have created this function to output the index,
void index(int temp[][7], int num, int Weeks){
    cout << "Index of the number(Original Place): " << endl;

        for (int a = 0; a<Weeks; a++){
            for (int b = 0; b<7; b++){   //this one is for outputting the index of elements 
                if(num==temp[a][b]){     // regarded sa original place nila nung ininput.
                    cout << "Steps [" << a << "] " << "["<< b << "]" << endl;
                }
            }
        }
        cout << endl << "Index of the number(Ascended): " << endl;
        for (int a = 0; a<Weeks; a++){
            for (int b = 0; b<7; b++){  // this one naman is in ascended index of the element
                if(num==steps[a][b]){
                    cout << "Steps [" << a << "] " << "["<< b << "]" << endl;
                }
            }
        }
}



void BinarySearch(int steps[][7], int Weeks, int target)
{
    int count = 0;
        cout << "Index of the element (Ascended): " << endl;


    for (int c = 0; c < Weeks; c++){
        int low = 0;
        int high = 7 - 1;

        while (low <= high){
            int mid = (low + high) / 2;

            if (steps[c][mid] == target){
                    cout << "Steps [" << c << "] " << "["<< mid << "]" << endl;
                count++;

                // Search for more occurrences of target in the same row
                int left  = mid - 1;
                int right = mid + 1;

                while (left >= 0 && steps[c][left] == target) {
                    cout << "Steps [" << c << "] " << "["<< left << "]" << endl;
                    count++;
                    left--;
                }
                while (right < 7 && steps[c][right] == target){
                    cout << "Steps [" << c << "] " << "["<< right << "]" << endl;
                    count++;
                    right++;
                }
                break;
            }

            else if (steps[c][mid] < target) {
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }

    if (count > 0) {
        cout << "Found " << count << " occurrences of " << target << endl;
    }
    else {
        cout << "Not found!" << endl;
    }
}


int main(){
        int  choice;
    do{
            retry:
            getch();
            system("cls");

    cout << "Main Menu" << endl;
    cout << "1 - Setting of Array Element" << endl;
    cout << "2 - Sum of Steps" << endl;
    cout << "3 - Sum of Steps(even numbers) " << endl;
    cout << "4 - Display all inputted elements " << endl;
    cout << "5 - Conversion of steps into pound " << endl;
    cout << "6 - Sorting the 2d array in ascending order. " << endl;
    cout << "7 - Searching for the element(sequential search) " << endl;
    cout << "8 - Searching for the element(binary search) " << endl;
    cout << "9 - Exit " << endl;
    cout << "Enter choice: ";
    cin>> choice;
       system("cls");
       switch(choice){
        case 1:
            do{//setting of how many day and week
                cout << "Enter How many week: ";
                cin >> Weeks;}while(Weeks<0 || Weeks >200);// if the condtion is satisfied,
            Setter(temp, steps, Weeks);                     //the user will retry the input
            break;

        case 2:
                cout << "Total Steps:" << TotalStepsProcess(steps, Weeks);
            break;
        
        case 3:
                cout << "Total Steps(Even Numbers):" << TotalEvenStepsProcess(steps, Weeks);
            break;
        
        case 4:
                DisplayallElements(temp, Weeks);
            break
            ;
        case 5:
                cout << "Total pound/s loss: " << StepsToLossPoundTotal(steps, Weeks);
            break;

        case 6:
                Ascending(steps, step2,  Weeks);
            break;

        case 7:
                int num;
                cout << "Enter Number:";
                cin >> num;
                if(SequantialSearch(steps, num, Weeks)==0){
                    cout << "The number did not occur";
                break;
                }
                else{
                    cout << "The number " << num << " occured " << SequantialSearch(steps, num, Weeks) << " time/s" << endl; 
                    index(temp, num, Weeks);
                }
            break;

        case 8:
                int num2;
                cout << "Enter a number: ";
                cin >> num2;
                BinarySearch(steps, Weeks, num2);

            break;
            
        case 9:
                exit(0);
            break;
        
        default:
                cout << "Invalid input, please retry...";
            goto retry ;
            break;
       }
        }while(choice<9);
    
        return 0;
    
       }
