#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int HashFuntion(string word)
{	
	char oneChar = ' ';
	static int a = 33;
	long result = 0;

	for (int i = 0; i < word.length(); i++)
	{
		oneChar = word[i];
		result = a * result;
		result = abs(result + (int)oneChar);
	}
	cout << "Hash value for \"" << word << "\" is: " << result << endl;
	return result;
}

void main()
{	
	HashFuntion("and");
	HashFuntion("and_eq");
	HashFuntion("asm");
	HashFuntion("auto");
	HashFuntion("bitand");
	HashFuntion("bitor");
	HashFuntion("bool");
	HashFuntion("break");
	HashFuntion("case");
	HashFuntion("catch");
	HashFuntion("char");
	HashFuntion("class");
	HashFuntion("compl");
	HashFuntion("const");
	HashFuntion("const_cast");
	HashFuntion("continue");
	HashFuntion("default");
	HashFuntion("#define");
	HashFuntion("delete");
	HashFuntion("do");
	HashFuntion("double");
	HashFuntion("dynamic_cast");
	HashFuntion("else");
	HashFuntion("enum");
	HashFuntion("exit()");
	HashFuntion("explicit");
	HashFuntion("export");
	HashFuntion("extern");
	HashFuntion("FALSE");
	HashFuntion("float");
	HashFuntion("for");
	HashFuntion("friend");
	HashFuntion("goto");
	HashFuntion("if");
	HashFuntion("inline");
	HashFuntion("int");
	HashFuntion("long");
	HashFuntion("mutable");
	HashFuntion("namespace");
	HashFuntion("new");
	HashFuntion("not");
	HashFuntion("not_eq");
	HashFuntion("operator");
	HashFuntion("or");
	HashFuntion("or_eq");
	HashFuntion("private");
	HashFuntion("protected");
	HashFuntion("public");
	HashFuntion("register");
	HashFuntion("reinterpret_cast");
	HashFuntion("short");
	HashFuntion("signed");
	HashFuntion("sizeof");
	HashFuntion("static");
	HashFuntion("static_cast");
	HashFuntion("struct");
	HashFuntion("switch");
	HashFuntion("template");
	HashFuntion("this");
	HashFuntion("throw");
	HashFuntion("TRUE");
	HashFuntion("try");
	HashFuntion("typedef");
	HashFuntion("typeid");
	HashFuntion("typename");
	HashFuntion("union");
	HashFuntion("unsigned");
	HashFuntion("using");
	HashFuntion("virtual");
	HashFuntion("void");
	HashFuntion("volatile");
	HashFuntion("wchar_t");
	HashFuntion("while");
	HashFuntion("xor");
	HashFuntion("xor_eq");
	cout << endl;
	system("PAUSE");
}