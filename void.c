void hidden_cursor(); // ���÷ƹ� 
void gotoxy(int x, int y); //���ʮy��
void egg_integration(int matrix[FACE_length][FACE_width], char* status);//��J�ʵe��X 
void infancy_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int infancy_life, int infancy_str, char* status);//���~���`�A��X
void infancy_eat_integration(int matrix[FACE_length][FACE_width], int infancy_life, int infancy_str, char* status);//���~���Y�װʵe��X
void growth_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int growth_life, int growth_str, char* status);//�������`�A�ʵe��X
void growth_eat_integration(int matrix[FACE_length][FACE_width], int growth_life, int growth_str, char* status);//�������Y�װʵe��X