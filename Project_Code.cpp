#include<bits/stdc++.h>
using namespace std;

/*###   Fast-IO  ###*/

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

/*###   GCC-Optimizers  ###*/

#pragma comment(linker, "/stack:247474112")
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")

/*###   Inputs   ###*/

#define testcases int testcases;cin>>testcases; while(testcases--)
#define queries int queries;cin>>queries; while(queries--)

/*###   Print-Multiple-At-A-Time   ###*/

template <typename T> void print(T t) { cout << t << endl; }
template <typename T, typename... Args> void print(T t, Args... args) { cout << t << " "; print(args...); }

/*
//Policy Based Data Structure
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree<
    int,
    null_type,
    less<int>,
    rb_tree_tag,
    tree_order_statistics_node_update > pbds;
*/

/*###   SsSsSs   ###*/

#define endl "\n"
#define ll long long
#define int long long
#define double long double

#define pb push_back
#define eb emplace_back
#define mp make_pair

typedef vector<int>vi;
typedef pair<int, int>pii;
typedef vector<pii>vpii;
typedef tuple<int, int> tii;
typedef tuple<int, int, int>tiii;

typedef priority_queue<int, vector<int > > max_pq;
typedef priority_queue<int, vector<int> , greater<int>  > min_pq;

int toint(const string &s) {stringstream ss; ss << s; int x; ss >> x; return x;}
string tostring ( int number ) {stringstream ss; ss << number; return ss.str();}

#define ar array
#define ff first
#define ss second
#define litemaxx return 0;
#define lite continue;
#define space " ";
#define ini(a, i) memset(a, i, sizeof(a))

#define f1(n) for(ll i=1;i<=n;i++)
#define f0(n) for(ll i=0;i<=n-1;i++)
#define b1(n) for(ll i=n;i>=1;--i)
#define b0(n) for(ll i=n-1;i>=0;--i)
#define flr(a,l,r) for(ll a=l; a<=r;++a)
#define rlf(a,r,l) for(ll a=r; a>=l;--a)

#define max(a,b) (a>=b?a:b)
#define min(a,b) (a<=b?a:b)
#define diff(a,b) (a>=b?a-b:b-a)

#define all(a) a.begin(),a.end()

#define sorta(a) sort(all(a));
#define sortd(a) sort(all(a), greater<ll>());
#define sortdp(a) sort(all(a), greater<pair<ll, ll>>());

#define lb(a, b) lower_bound(all(a), b);
#define ub(a, b) upper_bound(all(a), b);
#define plb(a, b) lower_bound(all(a), b) - a.begin();
#define pub(a, b) upper_bound(all(a), b) - a.begin();


/*###   Timer   ###*/

void time() {
#ifndef ONLINE_JUDGE
	cout << "\nTime: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
#endif
}

/* WT */

#define vt vector
#define sz(x) (int)(x).size()

#define F_OR(i, a, b, s) for (int i=(a); (s)>0?i<(b):i>(b); i+=(s))
#define F_OR1(e) F_OR(i, 0, e, 1)
#define F_OR2(i, e) F_OR(i, 0, e, 1)
#define F_OR3(i, b, e) F_OR(i, b, e, 1)
#define F_OR4(i, b, e, s) F_OR(i, b, e, s)
#define GET5(a, b, c, d, e, ...) e
#define F_ORC(...) GET5(__VA_ARGS__, F_OR4, F_OR3, F_OR2, F_OR1)
#define FOR(...) F_ORC(__VA_ARGS__)(__VA_ARGS__)
#define EACH(x, a) for (auto& x: a)

template<class T> bool umin(T& a, const T& b) {
	return b < a ? a = b, 1 : 0;
}
template<class T> bool umax(T& a, const T& b) {
	return a < b ? a = b, 1 : 0;
}

ll FIRSTTRUE(function<bool(ll)> f, ll lb, ll rb) {
	while (lb < rb) {
		ll mb = (lb + rb) / 2;
		f(mb) ? rb = mb : lb = mb + 1;
	}
	return lb;
}
ll LASTTRUE(function<bool(ll)> f, ll lb, ll rb) {
	while (lb < rb) {
		ll mb = (lb + rb + 1) / 2;
		f(mb) ? lb = mb : rb = mb - 1;
	}
	return lb;
}

template<class A> void read(vt<A>& v);
template<class A, size_t S> void read(ar<A, S>& a);
template<class T> void read(T& x) {
	cin >> x;
}
void read(double& d) {
	string t;
	read(t);
	d = stold(t);
}
// void read(long double& d) {
// 	string t;
// 	read(t);
// 	d = stold(t);
// }
template<class H, class... T> void read(H& h, T&... t) {
	read(h);
	read(t...);
}
template<class A> void read(vt<A>& x) {
	EACH(a, x)
	read(a);
}
template<class A, size_t S> void read(array<A, S>& x) {
	EACH(a, x)
	read(a);
}

string to_string(char c) {
	return string(1, c);
}
string to_string(bool b) {
	return b ? "true" : "false";
}
string to_string(const char* s) {
	return string(s);
}
string to_string(string s) {
	return s;
}
string to_string(vt<bool> v) {
	string res;
	FOR(sz(v))
	res += char('0' + v[i]);
	return res;
}

template<size_t S> string to_string(bitset<S> b) {
	string res;
	FOR(S)
	res += char('0' + b[i]);
	return res;
}

template<class T> string to_string(T v) {
	bool f = 1;
	string res;
	EACH(x, v) {
		if (!f)
			res += ' ';
		f = 0;
		res += to_string(x);
	}
	return res;
}

template<class A> void write(A x) {
	cout << to_string(x);
}

template<class H, class... T> void write(const H& h, const T&... t) {
	write(h);
	write(t...);
}

void print() {
	write("\n");
}

template<class H, class... T> void print(const H& h, const T&... t) {
	write(h);
	if (sizeof...(t))
		write(' ');
	print(t...);
}

void DBG() {
	cerr << "]" << endl;
}

template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if (sizeof...(t))
		cerr << ", ";
	DBG(t...);
}

#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

template<class T> void offset(ll o, T& x) {
	x += o;
}

template<class T> void offset(ll o, vt<T>& x) {
	EACH(a, x)
	offset(o, a);
}

template<class T, size_t S> void offset(ll o, ar<T, S>& x) {
	EACH(a, x)
	offset(o, a);
}

mt19937 mt_rng(chrono::steady_clock::now().time_since_epoch().count());
ll randint(ll a, ll b) {
	return uniform_int_distribution<ll>(a, b)(mt_rng);
}

template<class T, class U> void vti(vt<T> &v, U x, size_t n) {
	v = vt<T>(n, x);
}

template<class T, class U> void vti(vt<T> &v, U x, size_t n, size_t m...) {
	v = vt<T>(n);
	EACH(a, v)
	vti(a, x, m);
}



/*### Constants ###*/
#define INF INT_MAX
const int despacito = 1e9 + 7;
const int despacito_huge = 1e18 + 7;

/*### Variables ###*/
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;
const int N = 1e6 + 5;

const int MOD = 998244353;

void nameMito(set<string> mitochondria) {
	cout << "Enzymes that are involved in ROS pathways in mitochondria are : " << endl;
	for (auto i : mitochondria)
		cout << i << endl;
	cout << endl;
}

void namePero(set<string> generateROSperoxisomes, set<string> degradeROSperoxisomes) {
	cout << "Enzymes that are involved in ROS pathways in peroxisomes are : " << endl;
	for (auto i : generateROSperoxisomes)
		cout << i << endl;
	for (auto i : degradeROSperoxisomes)
		cout << i << endl;
	cout << endl;
}

void namePeroGen(set<string> generateROSperoxisomes) {
	cout << "Enzymes in peroxisomes that generate ROS are : " << endl;
	for (auto i : generateROSperoxisomes)
		cout << i << endl;
	cout << endl;
}

void namePeroDegrade(set<string> degradeROSperoxisomes) {
	cout << "Enzymes in peroxisomes that degrade ROS are : " << endl;
	for (auto i : degradeROSperoxisomes)
		cout << i << endl;
	cout << endl;
}

void nameEr(set<string> er) {
	cout << "Enzymes that are involved in ROS pathways in Endoplasmic Reticulum are : " << endl;
	for (auto i : er)
		cout << i << endl;
	cout << endl;
}

void nameLysosyme(set<string> lysosome) {
	cout << "Enzymes that are involved in ROS pathways in lysosome are : " << endl;
	for (auto i : lysosome)
		cout << i << endl;
	cout << endl;
}

//-------check functns-----//

void checkMito(string x, set<string> mitochondria) {
	if (mitochondria.find(x) != mitochondria.end())
		cout << "\t \t involved in ROS pathway in mitochondria" << endl;
	else
		cout << "\t \t not involved in ROS pathway in mitochondria" << endl;
}

void checkAndTellPero(string x, set<string> generateROSperoxisomes, set<string> degradeROSperoxisomes) {
	int popsi = 0;

	if (generateROSperoxisomes.find(x) != generateROSperoxisomes.end() || degradeROSperoxisomes.find(x) != degradeROSperoxisomes.end()) {
		cout << "\t \t involved in ROS pathway in peroxisome " << endl;
		popsi++;
	}

	else
		cout << "\t \t not involved in ROS pathway in peroxisome" << endl;

	if (popsi == 1) {

		if (generateROSperoxisomes.find(x) != generateROSperoxisomes.end())
			cout << "\t \t \t involved in generation of ROS" << endl;

		else
			cout << "\t \t \t involved in degradation of ROS" << endl;
	}

}

void checkEr(string x, set<string> er) {
	if (er.find(x) != er.end())
		cout << "\t \t involved in ROS pathway in Endoplasmic Reti" << endl;
	else
		cout << "\t \t not involved in ROS pathway in Endoplasmic Reti" << endl;
}

void checkLyso(string x, set<string> lysosome) {
	if (lysosome.find(x) != lysosome.end())
		cout << "\t \t involved in ROS pathway in lysosome" << endl;
	else
		cout << "\t \t not involved in ROS pathway in lysosome" << endl;
}

void solution(string (&arr1)[6], string (&arr2)[14], string (&arr3)[12], string (&arr4)[8], string (&arr5)[5]) {

	int n = 0;
	cout << "How many enzymes need to be checked ?" << endl;
	cout << endl;

	cin >> n;

	set<string> mitochondria;
	set<string> degradeROSperoxisomes;
	set<string> generateROSperoxisomes;
	set<string> er;
	set<string> lysosome;

	vector<string>v;
	string word;

	ifstream myFile1("mitochondria.txt");

	if (myFile1.is_open()) {
		while (getline(myFile1, word)) {
			v.push_back(word);
		}
	}

	myFile1.close();

	ifstream myFile2("generateROSperoxisomes.txt");

	while (getline (myFile2, word)) {
		v.push_back(word);
	}

	myFile2.close();

	ifstream myFile3("degradeROSperoxisomes.txt");
	while (getline (myFile3, word)) {
		v.push_back(word);
	}

	myFile3.close();

	ifstream myFile4("er.txt");

	while (getline (myFile4, word)) {
		v.push_back(word);
	}

	myFile4.close();

	ifstream myFile5("lysosome.txt");

	while (getline (myFile5, word)) {
		v.push_back(word);
	}

	myFile5.close();

	for (auto k : arr1)
		mitochondria.insert(k);

	for (auto k : arr2)
		generateROSperoxisomes.insert(k);

	for (auto k : arr3)
		degradeROSperoxisomes.insert(k);

	for (auto k : arr4)
		er.insert(k);

	for (auto k : arr5)
		lysosome.insert(k);

	nameMito(mitochondria);
	namePero(generateROSperoxisomes, degradeROSperoxisomes);
	namePeroGen(generateROSperoxisomes);
	namePeroDegrade(degradeROSperoxisomes);
	nameEr(er);
	nameLysosyme(lysosome);

	if (n != 0) {
		cout << "------------------------- Results of your " << n << " queries ------------------------- :- " << endl;
		cout << endl;
		for (int loop = 0; loop < n; loop++)
		{
			string x;
			cin >> x;
			cout << x << " enzyme is" << endl;
			checkMito(x, mitochondria);
			checkAndTellPero(x, generateROSperoxisomes, degradeROSperoxisomes);
			checkEr(x, er);
			checkLyso(x, lysosome);
			cout << endl;
		}
	}

}































































































































































































































int32_t main() {
	IOS;

	string arr1[6] = { "ascorbate", "apoplastic_ascorbate_oxidase", "NADH_dehydrogenase",
	                   "alternative_oxidase", "NADH_oxidase", "apoplastic_ascorbate"
	                 };

	string arr2[14] = { "acyl-coa_oxidase", "palimtoyl-coa_oxidase", "pristanoyl-coa_oxidase",
	                    "trihydroxycoprostanoyl-coa_oxidase", "urate_oxidase", "xanthine_oxidase",
	                    "D-amino_acid_oxidase", "sarosine_oxidase", "pipecolic_acid_oxidase",
	                    "D-aspartate_oxidase", "alpha_hydeoxy_acid_oxidase", "poly_amine_oxidase",
	                    "nitric_oxidase_synthase", "plant_sulfite_oxidase"
	                  };

	string arr3[12] = { "catalase", "glutathione_peroxidase", "Mn_SOD", "Cu_Zn_SOD", "epoxide_hydrolse",
	                    "glutathione_peroxidases_GPx7", "glutathione_peroxidases_GPx8", "oxidized_glutathione",
	                    "oxidoreductase", "peroxiredioxin_1", "PMP_20", "plant_ascorbate_glutathione_cycle"
	                  };

	string arr4[8] = { "superoxide_dismutase_1", "superoxide_dismutase_2", "oxidoreductase", "Ero_1",
	                   "peroxiredoxin_4", "glutathione_peroxidases_GPx7", "glutathione_peroxidases_GPx8",
	                   "oxidized_glutathione"
	                 };

	string arr5[5] = { "caspase_3", "caspase_9", "cathepsin_B", "cytochrome_C", "N_acetyl_cysteine" };

	solution(arr1, arr2, arr3, arr4, arr5);

	return 0;
}