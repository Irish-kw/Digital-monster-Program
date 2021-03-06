void growth_eat_integration(int matrix[FACE_length][FACE_width], int growth_life, int growth_str, char* status) {
	int a;
	for (a = 2; a < 8; a++) {

		ini_board(matrix);
		growth(matrix, 0, a);
		visual_board(matrix, 0, growth_life, growth_str, status); //matrix, color_flag, growth_life, growth_str, visual_type
		Sleep(1000);
		system("cls");
	}
}