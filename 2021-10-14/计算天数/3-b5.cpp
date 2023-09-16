/* 2151928 信12 唐芊竹 */
#include <iostream>
using namespace std;
int main()
{
    int year, y, r, sum;
    cout << "请输入年，月，日\n";
    cin >> year >> y >> r;
    bool a, b, c1, c2;//c1为平年的日的规律，c2为闰年的日的规律
    a = (year % 4 == 0) && (year % 100 != 0) || (year % 4 == 0) && (year % 400 == 0);//闰年为1，平年为0
    b = (y >= 1) && (y <= 12);
    c1 = (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && (r <= 31) && (r >= 1) || (y == 2) && (r <= 28) && (r >= 1) || (y == 4 || y == 6 || y == 9 || y == 11) && (r <= 30) && (r >= 1);
    c2 = (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && (r <= 31) && (r >= 1) || (y == 2) && (r <= 29) && (r >= 1) || (y == 4 || y == 6 || y == 9 || y == 11) && (r <= 30) && (r >= 1);
    if (b == 0) {     //月份不符合规律
        cout << "输入错误-月份不正确" << endl;
    }
    if (b == 1) {         //月份符合规律
        if ((a == 1) && (c2 == 0) || (a == 0) && (c1 == 0)) {  //日不符合规律
            cout << "输入错误-日与月的关系非法" << endl;
        }
        if ((a == 1) && (c2 == 1)) {    //闰年，且月、日符合规律
            if (y == 1) {
                sum = r;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 2) {
                sum = r + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 3) {
                sum = r + 31 + 29;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 4) {
                sum = r + 31 + 29 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 5) {
                sum = r + 31 + 29 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 6) {
                sum = r + 31 + 29 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 7) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 8) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 9) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 10) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 11) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 12) {
                sum = r + 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
        }
        if ((a == 0) && (c1 == 1)) {    //平年，且日符合规律
            if (y == 1) {
                sum = r;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 2) {
                sum = r + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 3) {
                sum = r + 31 + 28;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 4) {
                sum = r + 31 + 28 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 5) {
                sum = r + 31 + 28 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 6) {
                sum = r + 31 + 28 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 7) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 8) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 9) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 10) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 11) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
            if (y == 12) {
                sum = r + 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
                cout << year << "-" << y << "-" << r << "是" << year << "年的第" << sum << "天" << endl;
            }
        }
    }
    return 0;
}