void hidden_cursor(); // 隱藏滑鼠 
void gotoxy(int x, int y); //移動座標
void egg_integration(int matrix[FACE_length][FACE_width], char* status);//孵蛋動畫整合 
void infancy_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int infancy_life, int infancy_str, char* status);//幼年期常態整合
void infancy_eat_integration(int matrix[FACE_length][FACE_width], int infancy_life, int infancy_str, char* status);//幼年期吃肉動畫整合
void growth_integration(int matrix[FACE_length][FACE_width], int sub_move_control, int growth_life, int growth_str, char* status);//成長期常態動畫整合
void growth_eat_integration(int matrix[FACE_length][FACE_width], int growth_life, int growth_str, char* status);//成長期吃肉動畫整合