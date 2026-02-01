#include <iostream>
#include <string>
using namespace std;
int main() {

    //String functions in C++
    string st = "Sai";
    cout << st.size() << " " << st.length() << endl;
    cout << st[0] << st.at(1) << endl;
    cout << st.front() << st.back() << endl;
    st += " Rohan";
    st.append(" :)");
    cout << st << endl;
    st.insert(3, " Hello");
    cout << st << endl;
    st.erase(4, 5);
    cout << st << endl;

    st.clear();
    cout << st << endl;

    st = "Hello World";
    cout << st.find("World") << endl;
    cout << st.rfind("o") << endl;
    string sub = st.substr(0, 4);
    cout << st;
    string a = "Apple";
    string b = "Banana";
    if(a == b) cout << "Equal";
    if(a != b) cout << "Not equal";
    if(a < b) cout << "Apple comes before Banana";

    return 0;
}

//HackerEarth Problems

    //Read from STDIN, Write to STDOUT
    #include <iostream>
    using namespace std;
    #include <string>
    int main() {

	    int num1;
	    string string2;
	    cin >> num1;
	    cin >> string2;
	    int num2 = num1 * 2;
	    cout << num2 << endl << string2 << endl;

        return 0;
    }

    //Zoos
    #include <iostream>
    int main(){
        char word[21];
        int nz = 0, no = 0, i = 0;
        std::cin >> word;
        while (word[i] != '\0') {
            if (word[i] == 'z') {
                nz++;
            }
            else if (word[i] == 'o') {
                no++;
            }
            i++;
        }
        if ((2*nz) == no) {
            std::cout << "Yes";
        }
        else {
            std::cout << "No";
        }
        return 0;
    }

    //Factorial!
    #include <iostream>
    using namespace std;
    int main() {
        int i, N, f = 1;
        cin >> N;
        i = N;
        while (i > 1) {
            f = f * i;
            i -= 1;
        }
        cout << f;
        return 0;
    }

    //Roy and Profile Picture
    #include <iostream>
    using namespace std;

    int main(){
        int L, N, W, H;
        cin >> L;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> W >> H;
            if (W < L || H < L) {
                printf("UPLOAD ANOTHER\n");
            }
            else if (W >= L && H >= L && W != H) {
                cout << "CROP IT" << endl;
            }
            else {
                cout << "ACCEPTED" << endl;
            }
        }
        return 0;
    }
