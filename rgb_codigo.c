typedef struct{
	int red_rgb, blue_rgb, green_rgb;
} colour_matrix;

int house[12][12];

void matrix_conf(){
	
	colour_matrix white, black, grey, green, blue, red, yellow;
	
	white.red=255; 
	white.blue=255; 
	white.green=255; 
	
	black.red_rgb=0; 
	black.blue_rgb=0; 
	black.green_rgb=0; 
	
	grey.red_rgb=128; 
	grey.blue_rgb=128; 
	grey.green_rgb=128;
	
	green.red_rgb=51;
	green.blue_rgb=255; 
	green.green_rgb=51;
	
	blue.red_rgb=51;
	blue.blue_rgb=153; 
	blue.green_rgb=255;
	
	yellow.red_rgb=255;
	yellow.blue_rgb=255;
	yellow.green_rgb=0;
	
	
	for(i=0; i<12; i++){
		for(j=0; j<12; j++) house[i][j]=1;
	
	}

}

void matrix_room(char *str){
	char *str;
	int i=0;
	if(strcmp(str, "Living-room")==0){
		 for(i=2; i<8; i++){
			for(j=9; j<12; j++) house[i][j]=0
		}
	}
	else if(strcmp(str, "Room")==0){
		 for(i=2; i<7; i++){
			for(j=0; j<3; j++) house[i][j]=0
		}
	}
	else if(strcmp(str, "Kitchen")==0){
		 for(i=9; i<12; i++){
			for(j=8; j<12; j++) house[i][j]=0
		}
	}
	else if(strcmp(str, "Bathroom")==0){
		 for(i=8; i<12; i++){
			for(j=0; j<3; j++) house[i][j]=0
		}
	}
	else if(strcmp(str, "Garden")==0){
		 for(i=5; i<8; i++){
			for(j=4; j<8; j++) house[i][j]=0
		}
	}
	else if(strcmp(str, "Swimming-pool")==0){
		 for(i=0; i<3; i++){
			for(j=4; j<8; j++) house[i][j]=0
		}
	}  
	 
}
