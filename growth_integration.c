void growth_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int growth_life, int growth_str, char* status) {
	ini_board(matrix);
	growth(matrix, sub_move_control, 1); //matrix, move, type
	visual_board(matrix, 0, growth_life, growth_str, status); //matrix, color_flag, growth_life, growth_str, visual_type
	Sleep(100);
	system("cls");
}