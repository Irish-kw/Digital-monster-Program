void infancy_eat_integration(int matrix[FACE_length][FACE_width], int infancy_life, int infancy_str, char* status) {
	int a;
	for (a = 2; a < 8; a++) {

		ini_board(matrix);
		infancy(matrix, 0, a);
		visual_board(matrix, 0, infancy_life, infancy_str, status); //matrix, color_flag, infancy_life, infancy_str, visual_type
		Sleep(1000);
		system("cls");
	}