void infancy_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int infancy_life, int infancy_str, char* status) {
	ini_board(matrix);
	infancy(matrix, sub_move_control, 1); //matrix, move, type
	visual_board(matrix, 0, infancy_life, infancy_str, status); //matrix, color_flag, infancy_life, infancy_str, visual_type
	Sleep(100);
	system("cls");
}