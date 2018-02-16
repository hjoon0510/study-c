#define _CRT_SECURE_NO_WARNINGS
#define HASH_KEY	10
#include <stdio.h>
#include <string.h>
// user라는 구조체 변수를 만든다. 
struct user{
	char name[10];
	char address[60];
	char email[20];
	int score;
};
struct user data[10];

void find(char name[10], int key_value) // 해당 정보를 찾아서 출력한다. 
{
	printf("\n    [RESULT] \n%s: %d \naddress : %s \nemail : %s \n\n", data[key_value].name, data[key_value].score, data[key_value].address, data[key_value].email);
}
int hash_table(int score) // 해시테이블 함수를 만든다. 
{
	return score % HASH_KEY;
}

void insert(char name[10], int score, char address[30], char email[20]) // 데이타를 입력한다. 
{
	int index;
	index = hash_table(score);
	strcpy(data[index].name, name);
	strcpy(data[index].address, address);
	strcpy(data[index].email, email);
	data[index].score = score;
}

void remove(char name[10], int number)
{
	strcpy(data[number].name,    " ");
	strcpy(data[number].address, " ");
	strcpy(data[number].email, " ");
	data[number].score = 0;

};
int main(void)
{
	// 데이타 (성명, 점수)를 입력한다.
	insert("김철수", 30, "경기도 수원시 영통구 매탄동 30", "chulchul@gmail.com");
	insert("김수연", 28, "경기도 수원시 영통구 매탄동 10", "lsy0314@gmail.com");
	insert("김현준", 96, "경기도 수원시 영통구 매탄동 20", "hjoon0510@gmail.com");
	insert("김희지", 95, "경기도 수원시 영통구 매탄동 40", "mola@gmail.com");
	insert("김은혜", 37, "경기도 수원시 영통구 매탄동 50", "mola2@gmail.com");
	insert("김은정", 74, "경기도 수원시 영통구 매탄동 60", "mola3@gmail.com");
	// 김은혜의 index 값 7으로 해당 정원시 영통보를 곧바로 출력한다. 
	find("김은혜", 7);

	// 김수연, 28을 입력한다면 그 정보를 삭제하는 함수를 작성한다. 
	remove("김수연", 8); 
	return 0;

}
