void hidden_cursor() {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	GetConsoleCursorInfo(hOut, &cci);
	cci.bVisible = 0;//賦1為顯示，賦0為隱藏
	SetConsoleCursorInfo(hOut, &cci);
}