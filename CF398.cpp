# include <bits/stdc++.h>
typedef long long ll;
using namespace std;

struct friend_list
{
    ll friend_id;
    vector<ll>friends;
};

int main()
{
    ll users, id;
    set<ll>friends_of_id;
    set<ll>fof;
    cin >> users >> id;
    friend_list tropa[users + 1];
    for (int i = 1; i <= users; ++i)
    {
        ll num = 0;
        cin >> num;
        for (int j = 0; j < num; ++j)
        {
            ll input;
            cin >> input;
            tropa[i].friends.push_back(input);
        }
    }

    friends_of_id.insert(id);
    for (int i = 0; i < tropa[id].friends.size(); ++i)
    {
        friends_of_id.insert(tropa[id].friends[i]);
    }

    for (int i = 1; i <= users; ++i)
    {
        if (friends_of_id.find(i) != friends_of_id.end())
        {
            for (int j = 0; j < tropa[i].friends.size(); ++j)
            {
                if (friends_of_id.find(tropa[i].friends[j]) == friends_of_id.end())
                {
                    fof.insert(tropa[i].friends[j]);
                }
            }
        }
    }

    cout << fof.size() << endl;
    if (fof.size() != 0)
    {
        for (auto item : fof)
        {
            cout << item << " ";
        }
    }

}