//#define _CRT_SECURE_NO_WARNINGS 1 
//#include <iostream>
//#include <algorithm> // for std::reverse
//using namespace std;
//
//int main() {
//    int arr[] = { 1, 4, 9, 16, 25, 36, 49, 64, 81, 100 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    // Reverse the array
//    reverse(arr, arr + n);
//
//    // Print the reversed array
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
#include <iostream>
using namespace std;

// 定义sort函数，用于将数组从大到小排序
void sort(int* arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                // 交换两个元素的位置
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int scores[10]; // 用于存储10位同学的成绩

    // 从键盘输入10位同学的成绩
    cout << "请输入10位同学的成绩：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> scores[i];
    }

    // 调用sort函数进行排序
    sort(scores, 10);

    // 输出排序后的成绩
    cout << "排序后的成绩（从高到低）：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
