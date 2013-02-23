#include "project.h"
#include <iostream>
#include <string>
#include <math.h>
#include <cstdlib>
#include <stdint.h>
#include <sstream>
#include <fstream>
#include <vector>
#define MAX	200000
bool composite[MAX + 1];
vector<int> primes;
#define LIMIT	1000

using namespace std;

project::project()
{
    //ctor
}

project::~project()
{
    //dtor
}
void project::multiples_of_3_and_5()
{

    int i, sum_of_num = 0;

    for(i=0;i<1000;i++)
    {
            if((i%3==0)||(i%5==0))
                sum_of_num = sum_of_num + i;
    }
    cout<<"The sum of all numbers below 1000 that are divisible by 3 & 5 is ";
    cout<<sum_of_num<<endl;

}
void project::even_fibonacce()
{
    int firstNum=1, secNum=1, seqNum=0, sumEven=0;
    long size=4000000;

    while(seqNum<size)
    {
        seqNum += firstNum;
        if(seqNum%2==0)
        {
            sumEven += seqNum;
        }
        if(sumEven>size)
        {
            break;
        }

        firstNum = secNum;
        secNum = seqNum;
    }
    cout<<"The sum of all even-valued terms is "<<sumEven<<endl;
}
void project::largest_prime_factor()
{
    long long int i,j,n=600851475143;
    while(n>=4)
    {
        if(n%2==0)
        {  n=n/2;
            i=2;
        }

        else
        { i=3;
          j=0;
            while(j==0)
            {
                if(n%i==0)
                {
                    j=1;
                    n=n/i;
                }
            i=i+2;
            }
        i-=2;
        }
    }
	cout<<"The largest prime factor of the number 600851475143 is "<<i<<endl;
}
void project::largest_palindrome_product()
{
    int answer = 0;

	for(unsigned int i = 999; i != 99; i--)
		for(unsigned int j = 999; j != 99; j--) {

			int product = i*j;
			stringstream mystr2;
			mystr2 << product;
			string mystr = mystr2.str();
			unsigned int length = mystr.length();
			bool check = true;
			for(unsigned int k = 0; k < length/2; k++)
				if(mystr[k] != mystr[(length-k)-1]) {

					check = false;
					break;

					}

				if(answer <= product && check)
					answer = product;
			}
    cout<<"The largest palindrome made from the product of two 3-digit numbers is "<<answer<<endl;
}
void project::smallest_multiple()
{
    int i = 20;

    while(i %  2 != 0 || i %  3 != 0 || i %  4 != 0 || i %  5 != 0 ||i %  6 != 0 || i %  7 != 0 ||
          i %  8 != 0 || i %  9 != 0 ||i % 10 != 0 || i % 11 != 0|| i % 12 != 0 || i % 13 != 0 ||
          i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||i % 18 != 0 ||i % 19 != 0 || i % 20 != 0 )
        {
          i+=20;
        }

    cout<<"The smallest positive number that is evenly divisible by all of the numbers from 1 to 20 is "<<i<<endl;
}
void project::sum_square_diff()
{
    long sum = 0;
    long squared = 0;
    long result = 0;

    const int N = 100;

    sum = N * (N+1)/ 2;
    squared = (N * (N + 1) * (2 * N + 1)) / 6;

    result = sum * sum - squared;

    cout<<"The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is "<<result<<endl;
}
void project::nth_prime()
{
    int counter = 0;
    for (int i=2; ; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
            counter++;
			if (counter==10001)
            {
               cout<<"The 10001st prime number is "<<i<<endl;
				break;
			}
		}
    }

}
void project::largest_product_in_series()
{
    int product=0,n=0,prod=0,b=0,a=0,c=0,d=0,e=0;

    string number = "73167176531330624919225119674426574742355349194934"
                    "96983520312774506326239578318016984801869478851843"
                    "85861560789112949495459501737958331952853208805511"
                    "12540698747158523863050715693290963295227443043557"
                    "66896648950445244523161731856403098711121722383113"
                    "62229893423380308135336276614282806444486645238749"
                    "30358907296290491560440772390713810515859307960866"
                    "70172427121883998797908792274921901699720888093776"
                    "65727333001053367881220235421809751254540594752243"
                    "52584907711670556013604839586446706324415722155397"
                    "53697817977846174064955149290862569321978468622482"
                    "83972241375657056057490261407972968652414535100474"
                    "82166370484403199890008895243450658541227588666881"
                    "16427171479924442928230863465674813919123162824586"
                    "17866458359124566529476545682848912883142607690042"
                    "24219022671055626321111109370544217506941658960408"
                    "07198403850962455444362981230987879927244284909188"
                    "84580156166097919133875499200524063689912560717606"
                    "05886116467109405077541002256983155200055935729725"
                    "71636269561882670428252483600823257530420752963450";

			while(n < 995 )
            {
					a=number[n];
					a=a-48;
					b=number[n+1];
					b=b-48;
					c=number[n+2];
					c=c-48;
					d=number[n+3];
					d=d-48;
					e=number[n+4];
					e=e-48;
					prod =a*b*c*d*e;
				if(prod>product){product = prod;}
				n++;
            }

    cout<<"Greatest product of five consecutive digits in the 1000-digit number is "<<product<<endl;
}
void project::special_pytho_triplet()
{
   int a = 0, b = 0, c = 0,p;
    int s = 1000;
    bool found = false;
    for (a = 1; a < s / 3; a++)
    {
        for (b = a; b < s / 2; b++)
        {
            c = s - a - b;

            if (a * a + b * b == c * c)
            {
                found = true;
                break;
            }
        }

        if (found) {break;}
    }

     p = a*b*c;

    cout<<"The product of the three sides a,b, and c is "<<p<<endl;
}
void project::summation_of_primes()
{
    long num = 2000000;
    long long x = 0;
    long long i;
    for (i=2; i<num; i++)
    {
        bool prime=true;
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime){x=x+i;}
    }
    cout<<"The sum of all the primes below two million is "<<x<<endl;
}
void project::largest_product_grid()
{
    int num_container[20][20] = {{ 8,02,22,97,38,15,00,40,00,75,04,05,07,78,52,12,50,77,91, 8},
                                {49,49,99,40,17,81,18,57,60,87,17,40,98,43,69,48,04,56,62,00},
                                {81,49,31,73,55,79,14,29,93,71,40,67,53,88,30,03,49,13,36,65},
                                {52,70,95,23,04,60,11,42,69,24,68,56,01,32,56,71,37,02,36,91},
                                {22,31,16,71,51,67,63,89,41,92,36,54,22,40,40,28,66,33,13,80},
                                {24,47,32,60,99,03,45,02,44,75,33,53,78,36,84,20,35,17,12,50},
                                {32,98,81,28,64,23,67,10,26,38,40,67,59,54,70,66,18,38,64,70},
                                {67,26,20,68,02,62,12,20,95,63,94,39,63, 8,40,91,66,49,94,21},
                                {24,55,58,05,66,73,99,26,97,17,78,78,96,83,14,88,34,89,63,72},
                                {21,36,23, 9,75,00,76,44,20,45,35,14,00,61,33,97,34,31,33,95},
                                {78,17,53,28,22,75,31,67,15,94,03,80,04,62,16,14, 9,53,56,92},
                                {16,39,05,42,96,35,31,47,55,58,88,24,00,17,54,24,36,29,85,57},
                                {86,56,00,48,35,71,89,07,05,44,44,37,44,60,21,58,51,54,17,58},
                                {19,80,81,68,05,94,47,69,28,73,92,13,86,52,17,77,04,89,55,40},
                                {04,52, 8,83,97,35,99,16,07,97,57,32,16,26,26,79,33,27,98,66},
                                {88,36,68,87,57,62,20,72,03,46,33,67,46,55,12,32,63,93,53,69},
                                {04,42,16,73,38,25,39,11,24,94,72,18, 8,46,29,32,40,62,76,36},
                                {20,69,36,41,72,30,23,88,34,62,99,69,82,67,59,85,74,04,36,16},
                                {20,73,35,29,78,31,90,01,74,31,49,71,48,86,81,16,23,57,05,54},
                                {01,70,54,71,83,51,54,69,16,92,33,48,61,43,52,01,89,19,67,48},};


    int start = 0;
    int end = 3;
    long long mul_result = 1;

    vector<long long>final_results;

/////////////////////UP/DOWN/////////////////////
    for(int k=0; k<20; k++)
    {
        for(int i=0; i<=16; i++)
        {
            for(int j=start; j<=end; j++)
            {
                mul_result = mul_result * num_container[k][j];
                if (j == end)
                final_results.push_back(mul_result);
            }
            mul_result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;

        for(int i=0; i<=16; i++)
        {
            for(int j=start; j<=end; j++)
            {
                mul_result = mul_result * num_container[j][k];
                if (j == end)
                final_results.push_back(mul_result);
            }
            mul_result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;

    }
/////////////////////UP/DOWN Ends here//////////////////////



///////////////////Both Ways Diagonal Starts here//////////////////////
    int current_row = 0;

    for(int i=0; i<=16; i++)
    {
        for(int j=0; j<=16; j++)
        {
            current_row = i;
            for(int k=start; k<=end; k++)
            {
                mul_result = mul_result * num_container[current_row][k];
                current_row++;
                if (k==end)
                final_results.push_back(mul_result);
            }
            mul_result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;

        for(int j=0; j<=16; j++)
        {
            current_row = i+3;
            for(int k=start; k<=end; k++)
            {
                mul_result = mul_result * num_container[current_row][k];
                current_row--;
                if (k==end)
                final_results.push_back(mul_result);
            }
            mul_result = 1;
            start++;
            end++;
        }
        start = 0;
        end = 3;
    }
/////////////////////Both Ways diagonal ends here///////////////////


////////////////////Compare Thning Starts here//////////////////////

    long long the_big_one = 0;
    for(int i=0; i<final_results.size(); i++)
    {
        if (final_results[i] > the_big_one)
        the_big_one = final_results[i];
    }

    cout<<"The greatest product of four adjacent numbers in the same direction \n(up, down, left, right, or diagonally) in the 20×20 grid is "<<the_big_one<<endl;
}
void project::divisible_triangular_number()
{
    unsigned long long int i = 1;
	unsigned long long int sum = 0;

	while(1)
	{
        sum += i;
		int numD = 2;

		for(unsigned long long int n = 2; n < sqrt(sum); ++n)
			if(sum % n == 0)
				numD+=2;

		if(numD > 500)
		{
			cout<<"The value of the first triangle number to have \nover five hundred divisors is "<<sum<<endl;
			break;
        }

		++i;

    }
}
void project::largest_sum()
{
    const int LEN  = 50;
    const int NUMS = 100;
    int r       = 0;
    int c       = 0;
    int carry   = 0;
    int sum     = 0;

    ifstream inf("problem13.txt");

    vector<int> sumDigits;
    int arrayV[NUMS+1][LEN];

    while( !inf.eof() )
    {
        char* ptrCh = new char[LEN+1];
        inf.getline(ptrCh, LEN+1);
        for(int c = 0; c < LEN+1; c++){arrayV[r][c] = static_cast<int>(ptrCh[LEN -1 -c]-48);}
        r++;
    delete[] ptrCh;
    }

    for(int c = 0; c < LEN; c++)
    {
       for(int r = 0; r < NUMS; r++){sum += arrayV[r][c];}
        sumDigits.push_back(sum);
        sum = 0;
    }

    for(int i = 0; i < sumDigits.size(); i++)
    {
        carry = sumDigits[i] / 10;
        sumDigits[i] = sumDigits[i] % 10;

        if( (i+1) != sumDigits.size() ){sumDigits[i+1] += carry;}
        else
        {
            sumDigits.push_back(carry);
            break;
        }
    }

    cout <<"The first ten digits of the sum of the following\n one-hundred 50-digit numbers is ";

    for(int i = sumDigits.size()-1; i >= sumDigits.size()-9; i--)
        cout << sumDigits[i];

   cout <<endl;

}
void project::longest_collatz_sequence()
{
    unsigned long numTerms;
    unsigned long longestSeq = 1;
    unsigned long mostTerms  = 1;
    unsigned long count;
    unsigned long i;

    for(i = 999999; i > 1; i--)
    {
        numTerms = 1;
        count    = i;
        while (count > 1)
        {
            numTerms++;
            if (0 == count%2){count = count/2;}
            else{count = 3 * count + 1;}
        }
        if (numTerms > mostTerms)
        {
            mostTerms  = numTerms;
            longestSeq = i;
        }
    }

    cout<<"The starting number, under one million, \nthat produces the longest chain is "<<longestSeq<<endl;
}
void project::seive(int n)
{
	int	i, j;

	for (i = 2; i * i <= n; i++)
	{
		if (composite[i])
			continue;
		for (j = 2 * i; j <= n; j += i)
			composite[j] = 1;
		primes.push_back(i);
	}
	for (; i <= n; i++)
		if (!composite[i])
			primes.push_back(i);
}
void project::diophantine_reciprocals_a()
{
    seive(MAX);
	for (int N = 1000; N < MAX; N++)
	{
		if (!composite[N])
			continue;
		// Compute number of divsiors of N squared
		int numdiv = 1, cn = N;
		for (unsigned i = 0; 1 != cn && i < primes.size(); i++)
		{
			int	count = 0;
			while (cn % primes[i] == 0)
			{
				cn /= primes[i];
				count++;
			}
			numdiv *= (count * 2 + 1);
		}
		int ans = (numdiv + 1) / 2;
		if (ans > LIMIT)
		{
			cout << N << endl;
			break;
		}
	}

    cout<<"The least value of n for which the number of distinct\n solutions exceeds one-thousand is"<<endl;
}
void project::power_digit_sum()
{
     string total = "1";

    for (int exp = 1; exp <= 1000; ++exp)
    {
        int carry = 0;

        for (int digit = total.length() - 1; digit >= 0; --digit)
        {
            int product = (total[digit] - '0') * 2 + carry;

            if (product > 9)
            {
                carry = 1;
                product %= 10;
            }
            else{carry = 0;}

            total[digit] = '0' + product;

            if (digit == 0 && carry == 1)
            total.insert(0, "1");
        }
    }

    int sum = 0;

    for (unsigned int digit = 0; digit < total.length(); ++digit)

    sum += total[digit] - '0';

    cout<<"The sum of the digits of the number 2^1000 is "<<sum<<endl;
}
void project::addPoints(int* points, int* numb)
{
    if ( (1 == *numb) || (2 == *numb)  || (6 == *numb)  || (10 == *numb) )
    {
        *points += 3;
    }
   else if( (4 == *numb) || (5 == *numb)  || (9 == *numb) )
    {
        *points += 4;
    }
   else if( (3 == *numb) || (7 == *numb) || (8 == *numb) || (40 == *numb)
             ||
             (50 == *numb) || (60 == *numb) )
    {
        *points += 5;
    }

   else if( (11 == *numb) || (12 == *numb) || ( 20 == *numb) || (30 ==
              *numb) ||
              (80 == *numb) || (90 == *numb) )
    {
        *points += 6;

    }
   else if( (15 == *numb) || (16 == *numb) || (70 == *numb) )
    {
        *points += 7;

    }
    else if( (13 == *numb) || (14 == *numb) || (18 == *numb) || (19 ==
    *numb) )
    {
        *points += 8;

    }
    else if( (17 == *numb) )
    {
        *points += 9;
    }
}
void project::number_letter_counts()
{
    int sum     = 0;
    int num     = 0;
    int modPart = 0;
    int divPart = 0;

    for(num = 1; num <= 1000; num++)
    {
        if (num < 20){addPoints(&sum, &num);}
        else if( (num > 19) && (num < 100) )
        {
            if(0 == (num%10) ){addPoints(&sum, &num);}
            else
            {
                modPart = num%10;
                divPart = num - modPart;
                addPoints(&sum, &modPart);
                addPoints(&sum, &divPart);
            }
        }
        else if( ((num%100) >= 1) &&  ((num%100) < 20) )
        {
               sum += 7;
               sum += 3;
               modPart =  num%100;
               addPoints(&sum, &modPart);
               divPart = num/100;
               addPoints(&sum, &divPart);
        }
        else if(1000 == num){sum += 11;}
        else
        {
            if(0 == num%100)
            {
                sum += 7;
                divPart = num/100;
                addPoints(&sum, &divPart);
            }
            else
            {
                sum += 3;
                sum +=7;
                modPart = num%10;
                addPoints(&sum, &modPart);
                divPart = num%100 - modPart;
                addPoints(&sum, &divPart);
                divPart = num/100;
                addPoints(&sum, &divPart);
            }
        }
    }

    cout<<"The number of letters that will be used from numbers 1 to 1000 is "<< sum<<endl;
}
void project::max_path_sum_one()
{
    int size = 15;
    int triangle[15][15] = {
    {75},
    {95, 64},
    {17, 47, 82},
    {18, 35, 87, 10},
    {20, 4, 82, 47, 65},
    {19, 1, 23, 75, 3, 34},
    {88, 2, 77, 73, 7, 63, 67},
    {99, 65, 4, 28, 6, 16, 70, 92},
    {41, 41, 26, 56, 83, 40, 80, 70, 33},
    {41, 48, 72, 33, 47, 32, 37, 16, 94, 29},
    {53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14},
    {70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57},
    {91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48},
    {63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31},
    { 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23},
    };

    int value, left, right;
    int values[size][size];
    int* last = triangle[size-1];

    int row = size-2;
    int col;

    while (true)
    {
        for (col = 0; col < row+1; col++)
        {
            value = triangle[row][col];
            left = last[col];
            right = last[col+1];

            values[row][col] = value + (left > right ? left : right);
        }

        last = values[row];

        if (row == 0){break;}

        row--;
    }

    cout<<"The maximum total from top to bottom of the triangle below is"<< values[0][0] <<endl;
}
void project::counting_sundays()
{
    static int day   = 2;
    int year         = 1901;
    int month        = 1;
    int numSundays   = 0;
    int lastDay, checkDays;
    int* ptrNumDays;

    if( (month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12) )
    {
        checkDays = 31;
    }
    else if( (month ==2) )
    {
        checkDays = 28;
    }
    else
    {
        checkDays = 30;
    }


    for(year = 1901; year < 2001; year++)
    {
        for(month = 1; month < 13; month++)
        {
            if (31 == checkDays)
            {
                ptrNumDays = new int[31];
                lastDay = 31;
            }
            else if(30 == checkDays)
            {
                ptrNumDays = new int[30];
                lastDay = 30;
            }
            else
            {
                if( 0 != year%4 )
                {
                    ptrNumDays = new int[28];
                    lastDay = 28;
                }
                else
                {
                    ptrNumDays = new int[29];
                    lastDay = 29;
                }
            }
            for(int i = 0; i < lastDay; i++)
            {
                *(ptrNumDays+i) = day++;
                if(6 < day){day -= 7;}
            }
            if(0 == *(ptrNumDays) )
            {
                numSundays++;
            }
            delete[] ptrNumDays;
        }
    }
    cout<<"The total number of sundays fell on the first of the month\n during the twentieth century (1 Jan 1901 to 31 Dec 2000) is "<< numSundays<<endl;
}
void project::factorial_digit_sum()
{
    int n=100;
    int array[1000] = {0};
    array[0] = 1;

    for (int m = 1; m <= n; m++)
    {
        int buffer[1000] = {0};
        for (int i = 0; i < 1000; i++)
        buffer[i] = array[i] * m;

        for (int i = 0; i < 1000; i++)
        {
            buffer[i+1] += buffer[i]/10;
            array[i] = buffer[i]%10;
        }
    }

    int sum = 0;
    for (int i = 0; i < 1000; i++)
    sum += array[i];

    cout<<"The sum of the digits in the number 100! is "<<sum<<endl;
}
