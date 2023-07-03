#include <iostream>
#include <string>

int main() {
    std::string str;

    std::cout << "文字列を入力してください: ";
    std::getline(std::cin, str);

    int length = str.length();
    std::cout << "入力された文字列の長さは " << length << " です。\n";

    std::string reversedStr(str.rbegin(), str.rend());
    std::cout << "入力された文字列を逆順にすると: " << reversedStr << std::endl;

    std::string upperStr = str;
    for (char& c : upperStr) {
        c = std::toupper(c);
    }
    std::cout << "入力された文字列を大文字に変換すると: " << upperStr << std::endl;

    std::string lowerStr = str;
    for (char& c : lowerStr) {
        c = std::tolower(c);
    }
    std::cout << "入力された文字列を小文字に変換すると: " << lowerStr << std::endl;

    std::string substring;
    int startPos, lengthToExtract;

    std::cout << "抽出する部分文字列の開始位置を入力してください: ";
    std::cin >> startPos;

    std::cout << "抽出する部分文字列の長さを入力してください: ";
    std::cin >> lengthToExtract;

    if (startPos >= 0 && startPos < length && lengthToExtract > 0 && startPos + lengthToExtract <= length) {
        substring = str.substr(startPos, lengthToExtract);
        std::cout << "指定された位置からの部分文字列は: " << substring << std::endl;
    } else {
        std::cout << "無効な抽出範囲です。\n";
    }

    return 0;
}
