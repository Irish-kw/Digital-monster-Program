char visual_board(int matrix[FACE_length][FACE_width], int color_flag, int life, int str, char* status) {
	int a, b;
	for (a = 0; a < FACE_length; a++) {
		for (b = 0; b < FACE_width; b++) {

			if (color_flag == 1) {
				if (matrix[a][b] == 1) {
					color(0);
					gotoxy(a, b);
					printf("��");
				}
				else {
					color(6);
					gotoxy(a, b);
					printf("��");
				}
			}

			else {
				if (matrix[a][b] == 1) {
					gotoxy(a, b);
					printf("��");
				}
			}

		}
	}

	if (status == "egg") {
		gotoxy(0, 50);
		printf("���A�G ��Ƥ�");
	}

	else {
		gotoxy(20, 0);
		printf("�����{���Gq");
		gotoxy(21, 0);
		printf("�����G��");
		gotoxy(22, 0);
		printf("�k���G��");
		gotoxy(23, 0);
		printf("�Y�F��Gz");
		gotoxy(24, 0);
		printf("�i�ơGx");
		gotoxy(25, 0);
		if (status == "infancy") {
			printf("���A�G ���~��");
		}
		if (status == "growth") {
			printf("���A�G ������");
		}
		gotoxy(26, 0);
		if (status == "infancy") {
			printf("�ͩR�G%d/%d", life, infancy_life_max);
		}
		if (status == "growth") {
			printf("�ͩR�G%d/%d", life, growth_life_max);
		}
		gotoxy(27, 0);
		printf("�O�q�G%d", str);
	}
	return 0;
}