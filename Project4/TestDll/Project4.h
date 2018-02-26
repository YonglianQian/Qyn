
//标准导出模板
#ifdef PROJECT4_EXPORTS
#define PROJECT_API __declspec(dllexport)
#else
#define PROJECT_API __declspec(dllimport)
#endif // PROJECT4_EXPORTS

//修饰放在类型后面
//导出变量
extern int PROJECT_API nProject;

//导出函数
int PROJECT_API fnProject4(int a, int b);

//导出类
class PROJECT_API CProject4{
public:
	CProject4();
	~CProject4();
	bool Test();
	char* Test1();
};