#include <iostream>
#include <string>
using namespace std;

void countFrequency(string str)
{
    int freq[256] = {0};//256 cover all ascci valuee thats why 256 is used

    // Count frequency of each character
    for(int i = 0; i < str.length(); i++)
    {
        freq[str[i]]++;
    }

    // Display frequencies
    cout << "Character Frequencies:\n";
    for(int i = 0; i < 256; i++)
    {
        if(freq[i] > 0)
        {
            cout << char(i) << " : " << freq[i] << endl;
        }
    }
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    countFrequency(str);

    return 0;
}


// iteration	i	str[i]	ASCII Value	Operation	Frequency After Update
// 1	0	b	98	freq[98]++	b = 1
// 2	1	a	97	freq[97]++	a = 1
// 3	2	n	110	freq[110]++	n = 1
// 4	3	a	97	freq[97]++	a = 2
// 5	4	n	110	freq[110]++	n = 2
// 6	5	a	97	freq[97]++	a = 3
