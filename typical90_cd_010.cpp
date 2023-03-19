// 010 - Score Sum Queries（★2）
#include <iostream> // cin, cout, endl
#include <cmath>
using namespace std;

int main()
{
    long long
        l,
        i_l, i_result_l,
        r, i_r, i_result_r,
        ans = 0,
        divisor = pow(10, 9) + 7,
        inverse = (divisor + 1) / 2; /*逆元*/
    cin >> l;
    cin >> r;
    // 桁数分処理をしたいのでr以下を10ずつ掛ける
    // 1~l分はrから引き算する
    for (long long i = 0; i <= log10(r); i += 1)
    {
        // 引く分の階和のため-1
        // powが16以上になると指数表示になって情報落ちするのでlong longにキャスト
        i_l = (long long)pow(10, i) - 1;
        // 計算桁の最終値9...を出す
        // 18桁以上はオーバーフローする
        // 18桁目はrの値になるので
        i_r = r;
        if (i < 18)
            i_r = (long long)pow(10, i + 1) - 1;

        // 計算中の桁の途中にlがある場合それ以下を引く
        if (i_l < l)
            i_l = l - 1;
        // 計算中の桁の途中にrがある場合そこまでを演算対象にする
        if (i_r > r)
            i_r = r;
        // lがrを超えたら終了
        if (i_l > i_r)
            continue;
        // n(n+1)で階和を計算する
        // 演算中に桁数がlong long を超えないようにdivisorでmodを取りながら計算する
        i_result_l = i_l % divisor * ((i_l + 1) % divisor) % divisor * inverse % divisor;
        i_result_r = i_r % divisor * ((i_r + 1) % divisor) % divisor * inverse % divisor;
        // 答えに桁数掛けてansに足す
        ans = (ans + ((i_result_r - i_result_l + divisor) % divisor * (i + 1)) % divisor) % divisor;
    }
    cout << ans << endl;
}