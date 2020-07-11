#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
    cout<<hex<<nouppercase
        <<left<<showbase<<(long long)A<<'\n';

    cout<<dec<<setprecision(2)
        <<showpos<<right<<setfill('_')
        <<setw(15)<<fixed<<B<<'\n';

    cout<<scientific<<setprecision(9)
        <<uppercase<<noshowpos<<C<<'\n';
	}
	return 0;

}
