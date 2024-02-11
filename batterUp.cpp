// // #include <iostream>
// // #include <iomanip>
// // #include <vector>

// // using namespace std;

// // int main() {
// //     int numAtBats;
// //     cin >> numAtBats;

// //     vector<int> atBats(numAtBats);

// //     for (int i = 0; i < numAtBats; i++) {
// //         cin >> atBats[i];
// //     }

// //     double totalBases = 0;
// //     int officialAtBats = 0;

// //     for (int i = 0; i < numAtBats; i++) {
// //         if (atBats[i] >= 0) {
// //             totalBases += atBats[i];
// //             officialAtBats++;
// //         }
// //     }

// //     double sluggingPercentage = totalBases / officialAtBats;

// //     cout << fixed << setprecision(15) << sluggingPercentage << endl;

// //     return 0;
// // }

// #include<iostream>
// #include <vector>
// using namespace std;

// int main(){

//     int number;
//     cin>>number;

//     vector<int> atbats (number);

//     for (int i = 0; i < number; i++){
//         cin>>atbats[i];
//     }

//     double totalbases=0;
//     int officialAtBats =0;

//     for (int i = 0; i < number; i++){
//         if (i >=0){
//             totalbases += atbats[i];
//             officialAtBats++;
//         } 
//     }

//     double sluggingPercentage = totalbases / officialAtBats;
//     cout<< fixed <<setpre
    
    

//     return 0;
// }