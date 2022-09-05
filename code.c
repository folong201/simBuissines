int move,x,y;
void my_left(){
    switch(move){
        case "up": move = "left"; break;
        case "left": move = "down"; break;
        case "down": move = "right"; break;
        case "right": move = "up"; break;
    }
}

void my_right(){
    switch(move){
        case "up": move = "right"; break;
        case "right": move = "down"; break;
        case "down": move = "left"; break;
        case "left": move = "up"; break;
    }
}

void my_advancing(){
    switch(move){
        case "up":  y--; break;
        case "down": y++; break;
        case "right":x++; break;
        case "left": x--; break;
    }
}

String  my_spaceship(char command[])
{
    move = "up";
    x=0;
    y=0;
    for(i=0;i<sizeof(command);i++)
    {
         switch(command[i])
        {
            case "A":  my_advancing(); break;
            case "L": my_left(); break;
            case "R":my_right(); break;
        }
    }
    return( "{x: %d, y: %d ,direction : %d . }",x,y,move);
}


int main() {
  printf("Hello World!");
  return 0;
}










