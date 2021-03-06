void egg_integration(int matrix[FACE_length][FACE_width], char* status) {
	int iter, egg_flag, color_flag;
	for (iter = 0; iter < total_iter; iter++) {
		egg_flag = 1;
		color_flag = 0;

		ini_board(matrix);
		egg(matrix, egg_flag); // 矩陣轉換成蛋1 or 蛋2 
		visual_board(matrix, color_flag, 0, 0, status);
		Sleep(1000); // 等待1秒 
		system("cls"); // 清除畫面 
		egg_flag++;

		ini_board(matrix);
		egg(matrix, egg_flag); // 矩陣轉換成蛋1 or 蛋2 
		visual_board(matrix, color_flag, 0, 0, status);
		Sleep(1000); // 等待1秒 
		system("cls"); // 清除畫面
	}
}