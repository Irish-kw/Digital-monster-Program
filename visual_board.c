char visual_board(int matrix[FACE_length][FACE_width], int color_flag, int life, int str, char* status) {
	int a, b;
	for (a = 0; a < FACE_length; a++) {
		for (b = 0; b < FACE_width; b++) {

			if (color_flag == 1) {
				if (matrix[a][b] == 1) {
					color(0);
					gotoxy(a, b);
					printf("■");
				}
				else {
					color(6);
					gotoxy(a, b);
					printf("■");
				}
			}

			else {
				if (matrix[a][b] == 1) {
					gotoxy(a, b);
					printf("■");
				}
			}

		}
	}

	if (status == "egg") {
		gotoxy(0, 50);
		printf("狀態： 孵化中");
	}

	else {
		gotoxy(20, 0);
		printf("結束程式：q");
		gotoxy(21, 0);
		printf("左移：←");
		gotoxy(22, 0);
		printf("右移：→");
		gotoxy(23, 0);
		printf("吃東西：z");
		gotoxy(24, 0);
		printf("進化：x");
		gotoxy(25, 0);
		if (status == "infancy") {
			printf("狀態： 幼年期");
		}
		if (status == "growth") {
			printf("狀態： 成長期");
		}
		gotoxy(26, 0);
		if (status == "infancy") {
			printf("生命：%d/%d", life, infancy_life_max);
		}
		if (status == "growth") {
			printf("生命：%d/%d", life, growth_life_max);
		}
		gotoxy(27, 0);
		printf("力量：%d", str);
	}
	return 0;
}