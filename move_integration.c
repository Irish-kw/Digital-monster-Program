char move_integration(char input_choise, int sub_move_control) {

	if (input_choise == 'K') {
		sub_move_control -= 2;
		if (sub_move_control <= -6) {
			sub_move_control = -6;
		}
	}

	if (input_choise == 'M') {
		sub_move_control += 2;
		if (sub_move_control >= 36) {
			sub_move_control = 36;
		}
	}
	return sub_move_control;
}