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

// ����sort���������ڽ�����Ӵ�С����
void sort(int* arr, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                // ��������Ԫ�ص�λ��
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int scores[10]; // ���ڴ洢10λͬѧ�ĳɼ�

    // �Ӽ�������10λͬѧ�ĳɼ�
    cout << "������10λͬѧ�ĳɼ���" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> scores[i];
    }

    // ����sort������������
    sort(scores, 10);

    // ��������ĳɼ�
    cout << "�����ĳɼ����Ӹߵ��ͣ���" << endl;
    for (int i = 0; i < 10; i++) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
