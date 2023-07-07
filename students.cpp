#include <iostream>
#include <vector>

// 生徒を表す構造体
struct Student {
    std::string name;
    int age;
    std::string grade;
};

// 生徒を追加する関数
void addStudent(std::vector<Student>& students) {
    std::cout << "生徒を追加します...\n";

    Student newStudent;
    std::cout << "生徒の名前を入力してください: ";
    std::cin >> newStudent.name;
    std::cout << "生徒の年齢を入力してください: ";
    std::cin >> newStudent.age;
    std::cout << "生徒の学年を入力してください: ";
    std::cin >> newStudent.grade;

    students.push_back(newStudent);

    std::cout << "生徒が追加されました。\n";
}

// 全ての生徒を表示する関数
void viewStudents(const std::vector<Student>& students) {
    std::cout << "生徒を表示します...\n";

    if (students.empty()) {
        std::cout << "表示する生徒がありません。\n";
    } else {
        std::cout << "生徒一覧:\n";
        for (const auto& student : students) {
            std::cout << "名前: " << student.name << "、年齢: " << student.age << "、学年: " << student.grade << "\n";
        }
    }
}

// 名前で生徒を検索する関数
void searchStudent(const std::vector<Student>& students) {
    std::cout << "生徒を検索します...\n";

    std::string searchName;
    std::cout << "検索する生徒の名前を入力してください: ";
    std::cin >> searchName;

    bool found = false;
    for (const auto& student : students) {
        if (student.name == searchName) {
            std::cout << "生徒が見つかりました:\n";
            std::cout << "名前: " << student.name << "、年齢: " << student.age << "、学年: " << student.grade << "\n";
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "生徒が見つかりませんでした。\n";
    }
}

int main() {
    // 学校管理システム

    std::vector<Student> students; // 生徒を格納するベクター

    int choice;

    // ユーザーが終了を選ぶまでの無限ループ
    while (true) {
        // メニューオプションを表示
        std::cout << "学校管理システム\n";
        std::cout << "1. 生徒を追加する\n";
        std::cout << "2. 生徒を表示する\n";
        std::cout << "3. 生徒を検索する\n";
        std::cout << "4. 終了する\n";
        std::cout << "選択肢を入力してください: ";
        std::cin >> choice;

        // ユーザーの選択に基づいて処理を行う
        switch (choice) {
            case 1:
                addStudent(students);
                break;

            case 2:
                viewStudents(students);
                break;

            case 3:
                searchStudent(students);
                break;

            case 4:
                std::cout << "プログラムを終了します...\n";
                return 0;

            default:
                std::cout << "無効な選択肢です。もう一度選んでください。\n";
                break;
        }

        // ユーザーがEnterキーを押すまで待機してから画面をクリアする
        std::cout << "続けるにはEnterキーを押してください...";
        std::cin.ignore();
        std::cin.get();

        // 画面をクリアする
        std::cout << "\033[2J\033[1;1H";
    }

    return 0;
}
