#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <malloc.h>
#include <string.h>

////ex9
////struct Sight {
////	float left;
////	float right;
////};
//
//typedef struct _person {
//	struct _person* child;
//	char name[20];
//}Person;
//
//int main() {
//	Person* son;
//	son->child = NULL;
//	strcpy(son->name, "qwer");
//
//	Person* dad;
//	son->child = son;
//	strcpy(son->name, "asdf");
//
//	printf("%s %s", dad->name, dad->child.name);
//}
//
////pr1
//struct Point {
//	int x, y;
//};
//
//int equal(struct Point p1, struct Point p2);
//
//int main() {
//	struct Point p1 = { 1,2 };
//	struct Point p2 = { 3,5 };
//
//	equal(p1, p1);
//	equal(p1, p2);
//}
//
//int equal(struct Point p1, struct Point  p2) {
//	if (p1.x == p2.x & p1.y == p2.y) {
//		printf("�� ���� ��ġ�մϴ�.\n");
//	}
//	else {
//		printf("�� ���� ��ġ���� �ʽ��ϴ�.\n");
//	}
//}

////pr2
//struct Point {
//	int x, y;
//};
//struct Rectangle {
//	struct Point a, b;
//};
//
//int area(struct Point a, struct Point b) {
//	return (a.x - b.x) * (a.y - b.y);
//}
//
//int main() {
//	struct Point a = { 1,2 };
//	struct Point b = { 3,6 };
//	printf("�簢���� ������ %d", area(a, b));
//}

////pr3
//struct Vector {
//	double x;
//	double y;
//};
//
//struct Vector Vector_add(struct Vector v1, struct Vector v2) {
//	struct Vector v;
//	
//	v.x = v1.x + v2.x;
//	v.y = v1.y + v2.y;
//
//	return v;
//}
//
//void Vector_print(struct Vector v) {
//	printf("(%.1f, %.1f)", v.x, v.y);
//}
//
//int main() {
//	struct Vector v1 = { 1.0,2.0 };
//	struct Vector v2 = { 2.0,3.0 };
//	struct Vector v3;
//
//	v3 = Vector_add(v1, v2);
//	Vector_print(v3);
//}

////pr4
//struct Date {
//	int year;
//	int month;
//	int day;
//};
//
//struct Email {
//	char title[20];
//	char from[20];
//	char to[20];
//	char* content;
//	struct Date date;
//	int prior;
//};
//
//int main() {
//	////struct Date d = { 2016,3,1 };
//	struct Email e = { "hi","Brown","sally","content",2016,3,1 ,2 };
//
//	printf("���� : %s\n", e.title);
//	printf("������ : %s\n", e.from);
//	printf("�߽��� : %s\n", e.to);
//	printf("���� : %s\n", e.content);
//	printf("��¥ : %d�� %d�� %d��\n", e.date.year, e.date.month, e.date.day);
//	printf("�켱���� : %d\n", e.prior);
//}

////pr5
//struct food {
//	char* name;
//	int cal;
//};
//
//int main() {
//	struct food Food_Array[3] = { {"hamburger",900},{"bulgogi",500} ,{"sushi",700} };
//	
//	int sum = 0;
//	for (int i = 0; i < 3; i++) sum += Food_Array[i].cal;
//
//	printf("��ü Į�θ��� %d Į�θ��Դϴ�.\n", sum);
//}

////pr6
//#define MAX_SZ 3
//
//struct PhoneInfo {
//	char name[20];
//	char homeNum[20];
//	char phoneNum[20];
//};
//int r;
//
//void printPhoneInfo(struct PhoneInfo info) {
//	if (r == 0) return;
//	printf("�̸�: %s\n", info.name);
//	printf("�� ��ȭ��ȣ: %s\n", info.homeNum);
//	printf("�޴��� ��ȣ: %s\n\n", info.phoneNum);
//}
//
//void enroll(struct PhoneInfo* list, int idx) {
//	printf("�̸��� �Է� : ");
//	scanf("%s", list[idx].name);
//	printf("�� ��ȭ��ȣ�� �Է� : ");
//	scanf("%s", list[idx].homeNum);
//	printf("�޴��� ��ȣ�� �Է� : ");
//	scanf("%s", list[idx].phoneNum);
//
//	printf("== ��� �Ϸ� ==\n\n");
//}
//
//void list(struct PhoneInfo* list, int idx) {
//	r = 1;
//	for (int i = 0; i < idx; i++)
//	{
//		printPhoneInfo(list[i]);
//	}
//}
//
//struct PhoneInfo search(struct PhoneInfo* list) {
//	r = 0;
//	char buf[20];
//	struct PhoneInfo tmp = {"","",""};
//	printf("�̸��� �Է� : ");
//	scanf("%s", buf);
//	
//	for (int i = 0; i < MAX_SZ; i++)
//	{
//		if (strcmp(list[i].name, buf) == 0) {
//			printf("\n�˻� ����!\n");
//			r = 1;
//			return list[i];
//		}
//	}
//
//	printf("�ش� �̸��� ���� ��ȭ��ȣ�ΰ� �����ϴ�.\n");
//	return tmp;
//}
//
//int main() {
//	int select,idx=0;
//	struct PhoneInfo PhoneList[MAX_SZ];
//
//	while (1) {
//		printf("== �Ŵ� ==\n");
//		printf("1. ��ȭ��ȣ ���\n");
//		printf("2. ��ȭ��ȣ ����Ʈ\n");
//		printf("3. ��ȭ��ȣ �˻�\n");
//		printf("4. ����\n");
//
//		printf("���� => ");
//		scanf("%d", &select);
//		
//		switch (select)
//		{
//		case 1:
//			enroll(PhoneList, idx);
//			idx++;
//			break;
//		case 2:
//			list(PhoneList, idx);
//			break;
//		case 3:
//			printPhoneInfo(search(PhoneList));
//			break;
//		case 4:
//			printf("����...\n");
//			return 0;
//
//		default:
//			printf("�߸� �Է��ϼ̽��ϴ�.\n");
//			break;
//		}
//	}
//}

////pr7
//#define SIZE 200
//struct Wc {
//	char word[30];
//	int count;
//};
//
//struct Wc simbol_table[SIZE];
//int idx=0;
//
//void count(input) {
//	for (int i = 0; i < SIZE; i++)
//	{
//		if (strcmp(simbol_table[i].word, input) == 0) {
//			simbol_table[i].count++;
//			return;
//		}
//	}
//	simbol_table[idx].count = 1;
//	strcpy(simbol_table[idx++].word, input);
//}
//
//#define INPUT_SIZE 4
//int main() {
//	char buf[100];
//
//	for (int i = 0; i < INPUT_SIZE; i++)
//	{
//		printf("�ܾ �Է��ϼ��� : ");
//		scanf("%s", buf);
//		count(buf);
//	}
//
//	printf("\n[�󵵼�]\n");
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%s : %d\n", simbol_table[i].word, simbol_table[i].count);
//	}
//}

////pr8
//struct Product {
//	char name[100];
//	int price;
//	int sell_Count;
//	int	rest_Count;
//};
//
//struct Product product_Tables[10];
//int product_idx = 0;
//
//void enroll_Product() {
//	char buf[100];
//	int tmp;
//	printf("��ǰ�̸� : ");
//	scanf("%s", buf);
//	strcpy(product_Tables[product_idx].name, buf);
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	product_Tables[product_idx].price = tmp;
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	product_Tables[product_idx].rest_Count = tmp;
//
//	product_Tables[product_idx++].sell_Count = 1;
//
//	printf("\n==��� �Ϸ�==\n\n");
//}
//
//int get_Total_sales() {
//	int sum=0;
//	for (int i = 0; i < product_idx; i++)
//	{
//		sum += product_Tables[i].price * product_Tables[i].sell_Count;
//	}
//	return sum;
//}
//
//int main() {
//	while (1) {
//		printf("==�޴�==\n");
//		printf("1. ��ǰ�Ǹŵ��\n");
//		printf("2. �Ѹ����\n");
//		printf("3. ����\n");
//		
//		int select;
//		scanf("%d", &select);
//		switch (select)
//		{
//		case 1:
//			enroll_Product();
//			break;
//		case 2:
//			printf("\n�� ����� : %d\n", get_Total_sales());
//			break;
//		case 3:
//			return 0;
//		default:
//			break;
//		}
//	}
//}


////pr9
//#define DEFULT_LOC "C:\\tmp"
//
//typedef struct _song {
//	char title[100];
//	char author[100];
//	char loc[100];
//	char genre[100];
//}Song;
//
//typedef struct _song_DB {
//	int idx;
//	Song songs[100];
//}song_DB;
//
//song_DB database;
//
//void add() {
//	char buf[100];
//	printf("���� : ");
//	scanf("%s", buf);
//	strcpy(database.songs[database.idx].title,buf);
//
//	printf("���� : ");
//	scanf("%s", buf);
//	strcpy(database.songs[database.idx].author,buf);
//
//	printf("�з�(����, ��, Ŭ����, ��ȭ����) : ");
//	scanf("%s", buf);
//	strcpy(database.songs[database.idx].genre,buf);
//
//	strcpy(database.songs[database.idx++].loc, DEFULT_LOC);
//	printf("�߰��Ǿ����ϴ�.\n");
//}
//
//void delete() {
//	char buf[100];
//	
//	printf("������� �뷡 ���� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < database.idx; i++)
//	{
//		if (strcmp(database.songs[i].title, buf) == 0) {
//			strcpy(database.songs[i].title, "deleted");
//			printf("�����Ǿ����ϴ�.\n");
//			return;
//		}
//	}
//
//	printf("�ش� ���� ����!!\n");
//}
//
//void print(int idx) {
//	printf("===========\n");
//	printf("%s\n", database.songs[idx].title);
//	printf("%s\n", database.songs[idx].author);
//	printf("%s\n", database.songs[idx].loc);
//	printf("%s\n\n", database.songs[idx].genre);
//}
//
//void search() {
//	char  buf[100];
//
//	printf("��ȸ�Ϸ��� �뷡 ���� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < database.idx; i++)
//	{
//		if (strcmp(database.songs[i].title, buf) == 0) {
//			print(i);
//			return;
//		}
//	}
//
//	printf("�ش� ���� ����!!\n");
//}
//
//void sort() {
//	return;
//}
//
/*
int main() {
	while (1) {
		printf("==�Ŵ�==\n");
		printf("1. �߰�\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("4. �˻�\n");
		printf("5. ����\n");
		printf("6. ����\n");

		printf("=> ");
		int select;
		scanf("%d", &select);

		switch (select)
		{
		case 1:
			add();
			break;
		case 2:
			delete();
			break;
		case 3:
			for (int i = 0; i < database.idx; i++)
			{
				if (strcmp(database.songs[i].title, "deleted") != 0) print(i);
			}
			break;
		case 4:
			search();
			break;
		case 5:
			sort();	//�̱���..
			break;
		case 6:
			return 0;
		default:
			break;
		}
	}
}
*/
////pr10
//#define MAX_NUM 10
//
//typedef struct _std_Info {
//	int std_num;
//	char name[20];
//	double height;
//} Std_Info;
//
//Std_Info std_List[MAX_NUM];
//
//int main() {
//	int tmpi;
//	float tmpf;
//	char buf[100];
//	int idx;
//	for (idx = 0; idx < MAX_NUM; idx++)
//	{
//		printf("\n�Է������Ϸ��� -1\n\n");
//		printf("�й��� �Է��Ͻÿ� : ");
//		scanf("%d", &tmpi);
//		if (tmpi == -1) break;
//		printf("�̸��� �Է��Ͻÿ� : ");
//		scanf("%s", buf);
//		printf("������ �Է��Ͻÿ� : ");
//		scanf("%f", &tmpf);
//
//		std_List[idx].std_num = tmpi;
//		strcpy(std_List[idx].name, buf);
//		std_List[idx].height = tmpf;
//	}
//
//	printf("\n�Էµ� ������ %d�� �Դϴ�.\n\n",idx);
//
//	printf("�й�\t\t�̸�\t����\n");
//	printf("======================\n");
//	for (int i = 0; i < idx; i++)
//	{
//		printf("%d\t\t", std_List[i].std_num);
//		printf("%s\t", std_List[i].name);
//		printf("%f\n", std_List[i].height);
//	}
//}

////pr11,pr12
//typedef struct _employee_Info {
//	int id;
//	char name[20];
//	char tel[20];
//	int age;
//} Employee_Info;
//
//int idx = 0;
//
//void print(int idx, Employee_Info employee_List[10]) {
//	printf("%d\t%s\t%s\t%d\n", employee_List[idx].id, employee_List[idx].name, employee_List[idx].tel, employee_List[idx].age);
//}
//
//void print_2x(Employee_Info employee_List[10]) {
//	for (int i = 0; i < idx; i++)
//	{
//		if (employee_List[i].age / 10 == 2) print(i, employee_List);
//	}
//}
//
//void find_tel(Employee_Info employee_List[10]) {
//	char buf[100];
//	printf("�̸� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(employee_List[i].name, buf) == 0) {
//			print(i, employee_List);
//			return;
//		}
//	}
//	printf("�ڷᰡ �������� �ʽ��ϴ�.\n");
//}
//
//int main() {
//	Employee_Info employee_List[10] = {
//		{1,"ȫ�浿","111-1111",45},
//		{2,"��ö��","222-2222",27},
//		{3,"�̿���","333-3333",23},
//		{4,"��öȣ","444-4444",29},
//		{5,"�ѿ���","555-5555",26}
//	};
//	idx = 5;
//
//	printf("20�� ���\n");
//	print_2x(employee_List);
//
//	while (1) {
//		find_tel(employee_List);
//	}
//}


////pr13=>���� �� ��������=>�����Ϸ�
//#define MAX_STOCK_TYPE 10
//
//typedef struct _stock {
//	char name[100];
//	int stock_count;
//	int price;
//}Stock;
//
//int idx = 0;
//
//void print_Menu() {
//	printf("==============\n");
//	printf("1. �԰�\n");
//	printf("2. �Ǹ�\n");
//	printf("3. ǰ�����\n");
//	printf("4. �����Ʈ ���\n");
//	printf("5. ǰ��˻�\n");
//	printf("6. ���ݾ��հ����\n");
//	printf("7. ����\n");
//	printf("==============\n\n");
//}
//
//void add(Stock stock_list[]){
//	char buf[100];
//	printf("��ǰ�� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(stock_list[i].name, buf) == 0) {
//			printf("%s��� ��ǰ�� �̹� �����մϴ�.\n", buf);
//		}
//	}
//
//	strcpy(stock_list[idx].name, buf);
//
//	int tmp;
//	printf("������ : ");
//	scanf("%d", &tmp);
//	stock_list[idx].stock_count = tmp;
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	stock_list[idx++].price = tmp;
//}
//
//void sell(Stock stock_list[MAX_STOCK_TYPE]) {
//	char buf[100];
//	int tmp;
//
//	printf("��ǰ�� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(stock_list[i].name, buf) == 0) {
//			printf("���� ��� ���� : %d\n", stock_list[i].stock_count);
//			printf("�Ǹŷ� : ");
//			scanf("%d", &tmp);
//
//			if (stock_list[i].stock_count < tmp) {
//				printf("����������!\n");
//				return;
//			}
//
//			stock_list[i].stock_count -= tmp;
//			printf("���� ��� ���� : %d\n", stock_list[i].stock_count);
//			return;	
//		}
//	}
//
//	printf("%s��� ��ǰ�� �������� �ʽ��ϴ�..\n", buf);
//}
//
//void delete(Stock stock_list[]) {
//	char buf[100];
//	printf("��ǰ�� : ");
//	scanf("%s", buf);
//
//	for (int i = 0; i < idx; i++)
//	{
//		if (strcmp(stock_list[i].name, buf) == 0) {
//			if (stock_list[i].stock_count > 0) {
//				printf("���� �Ұ� ��� ����!\n");
//				return;
//			}
//			for (int j = i; j < idx-1; j++)
//			{
//				stock_list[j] = stock_list[j + 1];
//				idx--;
//			}
//			return;
//		}
//	}
//
//	printf("%s��� ��ǰ�� �������� �ʽ��ϴ�..\n", buf);
//}
//
//void print_Stock(int idx, Stock stock_list[MAX_STOCK_TYPE]) {
//	printf("%s\t", stock_list[idx].name);
//	printf("%d\t", stock_list[idx].stock_count);
//	printf("%d\n", stock_list[idx].price);
//}
//
//void print_Stock_List(Stock stock_list[MAX_STOCK_TYPE]) {
//	printf("��ǰ��\t���\t�ݾ�\n");
//	printf("==============\n");
//	
//	for (int i = 0; i < idx; i++)
//	{
//		print_Stock(i, stock_list);
//	}
//
//	printf("==============\n\n");
//}
//
//void search_Stock(Stock stock_list[MAX_STOCK_TYPE]) {
//	char buf[100];
//	printf("��ǰ�� : ");
//	scanf("%s", buf);
//	int i;
//
//	for (i = 0; i < idx; i++) {
//		if (strcmp(stock_list[i].name, buf) == 0) {
//			printf("��ǰ��\t���\t�ݾ�\n");
//			printf("==============\n");
//			print_Stock(i, stock_list);
//			printf("==============\n\n");
//			return;
//		}
//	}
//
//	printf("%s��� ��ǰ�� �������� �ʽ��ϴ�..\n", buf);
//}
//
//int cal_Stock_Sum(Stock stock_list[MAX_STOCK_TYPE]) {
//	int sum=0;
//
//	for (int i = 0; i < idx; i++)
//	{
//		if (stock_list[i].stock_count == -1) continue;
//		else sum += stock_list[i].price * stock_list[i].stock_count;
//	}
//
//	return sum;
//}
//
//int main() {
//	int select;
//	Stock stock_list[MAX_STOCK_TYPE];
//
//	while (1) {
//		print_Menu(); 
//		printf("���� => ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			add(stock_list);
//			break;
//		case 2:
//			sell(stock_list);
//			break;
//		case 3:
//			delete(stock_list);
//			break;
//		case 4:
//			print_Stock_List(stock_list);
//			break;
//		case 5:
//			search_Stock(stock_list);
//			break;
//		case 6:
//			printf("���ݾ��հ���� : %d\n", cal_Stock_Sum(stock_list));
//			break;
//		case 7:
//			printf("����..\n");
//			return;
//		default:
//			break;
//		}
//	}
//}

////pr14, 15 =>�ڵ� ����ο�=>�����Ϸ�
//#define MAX_TABLE_SIZE 10
//typedef struct _exam_Info {
//	int code;
//	char name[100];
//	int kor;
//	int eng;
//	int math;
//	int rank;
//	int sum;
//}Exam_info;
//int idx=0;
//
//void input_Table(Exam_info result_Table[]) {
//	int tmp;
//	char buf[20];
//
//	printf("�й� : ");
//	scanf("%d", &tmp);
//	result_Table[idx].code = tmp;
//
//	printf("�̸� : ");
//	scanf("%s", buf);
//	strcpy(result_Table[idx].name,buf);
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	result_Table[idx].kor = tmp;
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	result_Table[idx].eng = tmp;
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	result_Table[idx].math = tmp;
//
//	result_Table[idx].sum =
//		result_Table[idx].kor +
//		result_Table[idx].eng +
//		result_Table[idx].math;
//
//	int cnt = 0;
//	for (int i = 0; i < idx; i++)
//	{
//		if (result_Table[i].sum<result_Table[idx].sum)
//		{
//			result_Table[i].rank++;
//			cnt++;
//		}
//	}
//
//	result_Table[idx].rank = idx - cnt + 1;
//	idx++;
//}
//
//void print_Table(Exam_info result_Table[]) {
//	printf("�й�\t�̸�\t����\t����\t����\t����\t���\t���\n");
//	for (int i = 0; i < idx; i++)
//	{	
//		printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\n",
//			result_Table[i].code,
//			result_Table[i].name,
//			result_Table[i].kor,
//			result_Table[i].eng,
//			result_Table[i].math,
//			result_Table[i].sum,
//			result_Table[i].sum / 3,
//			result_Table[i].rank
//		);
//	}
//}
//
//void swap(Exam_info result_Table[], int a, int b) {
//	Exam_info tmp;
//	tmp = result_Table[a];
//	result_Table[a] = result_Table[b];
//	result_Table[b] = tmp;
//}
//
//void sort_Table(Exam_info result_Table[]) {
//	for (int i = 0; i < idx; i++)
//	{
//		for (int j = 0; j < idx-i-1; j++)
//		{
//			if (result_Table[j].rank > result_Table[j + 1].rank) swap(result_Table, j, j + 1);
//		}
//	}
//}
//
//int main() {
//	Exam_info result_Table[MAX_TABLE_SIZE];
//
//	for (int i = 0; i < 5; i++)
//	{
//		input_Table(result_Table);
//	}
//	
//	print_Table(result_Table);
//	sort_Table(result_Table);
//	print_Table(result_Table);
//}
///* �ӽ� �Է� ������
//1 aaa 70 70 70
//2 bbb 100 100 100
//3 ccc 80 80 80
//4 ddd 60 60 60
//5 eee 90 90 90
//*/

////pr16
//typedef struct _product_Info {
//	char name[20];
//	int unitp;
//	int volume;
//	int totalp;
//}Product_Info;
//
//int idx = 0;
//
//void menu() {
//	printf("===========\n");
//	printf("1. �Է�\n");
//	printf("2. ����\n");
//	printf("3. ���\n");
//	printf("4. ����\n");
//	printf("===========\n");
//}
//
//void input(Product_Info product_List[20]) {
//	int tmp;
//	char buf[20];
//
//	printf("\n�Ǹ������� �Է����ּ���..\n");
//	printf("�̸� : ");
//	scanf("%s", buf);
//	strcpy(product_List[idx].name, buf);
//
//	printf("�ܰ� : ");
//	scanf("%d", &tmp);
//	product_List[idx].unitp = tmp;
//
//	printf("���� : ");
//	scanf("%d", &tmp);
//	product_List[idx].volume = tmp;
//	
//	tmp = product_List[idx].unitp * product_List[idx].volume;
//	printf("�ݾ� : %d\n", tmp);
//	product_List[idx++].totalp = tmp;
//}
//
//void swap(Product_Info product_List[20], int a, int b) {
//	Product_Info tmp;
//	tmp = product_List[a];
//	product_List[a] = product_List[b];
//	product_List[b] = tmp;
//}
//
//void sort(Product_Info product_List[20]) {
//	for (int i = 0; i < idx; i++)
//	{
//		for (int j = 0; j < idx - i - 1; j++)
//		{
//			if (*product_List[j].name > *product_List[j + 1].name) swap(product_List, j, j + 1);
//		}
//	}
//}
//
//void print(Product_Info product_List[20]) {
//	if (idx == 0) return;
//
//	char buf[20];
//	strcpy(buf, product_List[0].name);
//	int tmp = 0; int sum = 0;
//
//	printf("ǰ��\t�ܰ�\t����\t�Ǹž�\n");
//	printf("\t%s\n", product_List[0].name);
//	for (int i = 0; i < idx; i++)
//	{	
//		if (strcmp(buf, product_List[i].name) != 0) {
//			printf("ǰ��� : %d\n\n", tmp);
//			printf("\t%s\n", product_List[i].name);
//			strcpy(buf, product_List[i].name);
//			tmp = 0;
//		}
//		printf("\t%d\t%d\t%d\n",
//			product_List[i].unitp,
//			product_List[i].volume,
//			product_List[i].totalp
//		);
//		tmp += product_List[i].totalp;
//		sum += product_List[i].totalp;
//	}
//	printf("ǰ��� : %d\n\n", tmp);
//	printf("�հ� : %d\n", sum);
//}
//
//int main() {
//	Product_Info product_List[20];
//	int select;
//
//	while (1) {
//		menu();
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			input(product_List);
//			break;
//		case 2:
//			sort(product_List);
//			break;
//		case 3:
//			print(product_List);
//			break;
//		case 4:
//			printf("����..\n");
//			return 0;
//		default:
//			break;
//		}
//	}
//	
//}

//17

int idx;

typedef struct _info {
	char department_name[20];
	char name[20];
	int salary;
	int allowance;
}Info;

void input(Info info_table[10]) {
	char buf[20];
	int tmp;

	printf("�μ��� : ");
	scanf("%s", buf);
	strcpy(info_table[idx].department_name,buf);

	printf("�̸� : ");
	scanf("%s", buf);
	strcpy(info_table[idx].name, buf);

	printf("�⺻�� : ");
	scanf("%d", &tmp);
	info_table[idx].salary = tmp;

	printf("���� : ");
	scanf("%d", &tmp);
	info_table[idx++].allowance = tmp;
}

void swap(Info info_table[20], int a, int b) {
	Info tmp;
	tmp = info_table[a];
	info_table[a] = info_table[b];
	info_table[b] = tmp;
}

void sort(Info info_table[10]) {
	for (int i = 0; i < idx; i++)
		{
			for (int j = 0; j < idx - i - 1; j++)
			{
				if (*info_table[j].department_name > *info_table[j + 1].department_name) swap(info_table, j, j + 1);
			}
		}
}

void print(Info info_table[20]) {
	if (idx == 0) return;
	char buf[20];
	strcpy(buf, info_table[0].department_name);
	int tmp = 0; int sum = 0;

	printf("�μ���\t�̸�\t�⺻��\t����\t�޿��Ѿ�\n");
	printf("\n�μ��� : %s\n", buf);

	for (int i = 0; i < idx; i++)
	{
		if (strcmp(buf, info_table[i].department_name) != 0) {
			printf("�޿��Ѿ� : %d\n", tmp);
			printf("\n�μ��� : %s\n", info_table[i].department_name);
			strcpy(buf, info_table[i].department_name);
			tmp = 0;
		}
		printf("%s\t%d\t%d\t%d\n",
			info_table[i].name,
			info_table[i].salary,
			info_table[i].allowance,
			info_table[i].salary + info_table[i].allowance
		);
		tmp += info_table[i].salary + info_table[i].allowance;
		sum += info_table[i].salary + info_table[i].allowance;
	}
	printf("�޿��Ѿ� : %d\n\n", tmp);
	printf("�޿��Ѿ� �հ� : %d\n\n", sum);
}

#define UNIT_SIZE 8
void result(Info info_table[20]) {
	if (idx == 0) return;
	char buf[20];
	strcpy(buf, info_table[0].department_name);
	int tmp = 0; int sum = 0;
	int units_tmp[UNIT_SIZE];
	int units_sum[UNIT_SIZE];
	int units[UNIT_SIZE + 1] = { INFINITY,50000,10000,5000,1000,500,100,50,10 };
	printf("�μ���\t50000\t10000\t5000\t1000\t500\t100\t50\t10\n\n");

	for (int i = 0; i < idx; i++)
	{
		if (strcmp(buf, info_table[i].department_name) != 0) {
			for (int i = 0; i < UNIT_SIZE; i++)
			{
				units_tmp[i] = tmp % units[i]/ units[i+1];
			}
			printf("%s\t", buf);
			for (int i = 0; i < UNIT_SIZE; i++)
			{
				printf("%d\t", units_tmp[i]);
			}
			printf("%d\n", tmp);
			strcpy(buf, info_table[i].department_name);
			tmp = 0;
		}
		sum += info_table[i].salary + info_table[i].allowance;
		tmp += info_table[i].salary + info_table[i].allowance;
	}

	for (int i = 0; i < UNIT_SIZE; i++)
	{
		units_tmp[i] = tmp % units[i] / units[i + 1];
	}
	printf("%s\t", buf);

	for (int i = 0; i < UNIT_SIZE; i++)
	{
		printf("%d\t", units_tmp[i]);
	}
	printf("%d\n", tmp);


	for (int i = 0; i < UNIT_SIZE; i++)
	{
		units_sum[i] = sum % units[i] / units[i + 1];
	}
	printf("�հ�\t");
	for (int i = 0; i < UNIT_SIZE; i++)
	{
		printf("%d\t", units_sum[i]);
	}
	printf("%d\n", sum);
}

int main() {
	Info info_table[10];
	int select;
	
	while (1) {
		printf("====================\n");
		printf("1.�Է�\n");
		printf("2.����\n");
		printf("3.���\n");
		printf("4.����\n");
		printf("5.����\n");
		printf("====================\n");

		scanf("%d", &select);

		switch (select)
		{
		case 1:
			input(info_table);
			break;
		case 2:
			sort(info_table);
			break;
		case 3:
			print(info_table);
			break;
		case 4:
			result(info_table);
			break;
		case 5:
			return 0;
		default:
			break;
		}
	}
}

/*
1
�ѹ� �谡�� 1540000 53900
1
�λ� ���ؼ� 1500000 52500
1
���� ȫ�浿 1689000 86400
1
�λ� ���ϴ� 1470000 23300
1
���� ������ 1242000 45200
1
�λ� ������ 3522900 14200
1
�ѹ� ���� 1600000 65000

*/