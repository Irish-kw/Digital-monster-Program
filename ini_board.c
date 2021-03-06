char ini_board(int matrix[FACE_length][FACE_width]) {
	int a, b;

	for (a = 0; a < FACE_length; a++) {
		for (b = 0; b < FACE_width; b++) {
			matrix[a][b] = 0;
		}
	}
	return 0;
}