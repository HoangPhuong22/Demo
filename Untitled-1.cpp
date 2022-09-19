#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type,less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define endl '\n'
#define fi first
#define se second
#define pb push_back
#define mpr make_pair
#define all(a) a.begin(),a.end()
#define ms(a,n) memset(a , n , sizeof(a))
#define FOR(i,a,b) for(int i = a ; i <= b ;i++)
#define RFOR(i,a,b) for(int i = b ; i >= a ; i--)
#define fact_io() ios::sync_with_stdio(NULL);cout.tie(NULL);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<ll,ll>pl;
typedef vector<ll>vll;
typedef vector<int>vii;
typedef pair<int,int>pi;
const int MOD = 1e9 + 7;

inline ll gcd(ll a , ll b) {return b == 0 ? a : gcd(b , a % b);}
inline ll lcm(ll a , ll b) {return a / gcd(a , b) * b ;}
struct node
{
    int x , y , z;
    string s;
};

class room
{
	private :
		int n , m;
		vector<string>v;
	public :
		room(int n , int m)
		{
			this->n = n;
			this->m = m;
			v.resize(n + 1);
		}
		friend istream& operator >> (istream &in , room &x)
		{
			for(int i = 0 ; i < n ;i++)
			{
				in >> x.v[i];
			}
            return in;
		}
        void BFS(int i , int j)
        {
            vector<int>dx{1 , -1 , 0 , 0};
            vector<int>dy{0 , 0 , -1 , 1};
            string res = "UDLR";
            queue<node>Q;
            Q.push({i , j , 0 , ""});
            while(!Q.empty())
            {
                node tmp = Q.front();
                for(in)
            }
        }
};

int main()
{
	ios::sync_with_stdio(NULL);cout.tie(NULL);cin.tie(NULL);
	int n , m ; cin >> n >> m;
	room *a = new room(n , m);
	cin >> *a;
	cout << a->get();
	return  0;
}
