void attack(){
	int num;
	cout << "무슨 공격을 할까요?" << endl;
	cin >> num;
	switch(num){
		case 1:
			cout << "기본 공격(데미지: 5) " << endl;
			basic attack();
			break; 
		case 2:
			cout << "기본 스킬1(데미지: 10)" << endl;
			basic skill1(); 
			break;
		case 3:
		    cout << "기본 스킬2 (데미지: 15)"  << endl; 
		    basic skill2();
		    break;
	}
}

void basic attack( )                        //만날시 열리는 전투창으로 이동 나중에  
{
	Monster_Hp = Monster_Hp - 5;
	if(sw){
		Monster_Hp = Monster_Hp - 15;
		sw = false;
	}
}

void basic skill1()                             //만날시 열리는 전투창으로 이동 나중에 
{ 
	Monster_Hp = Monster_Hp - 10;
	if(sw){
		Monster_Hp = Monster_Hp - 20;
	    sw = false; 
	}
}

void basic skill2()                              //만날시 열리는 전투창으로 이동 나중에 
{
	Monster_Hp = Monster_Hp - 15;
	if(sw){
		Monster_Hp = Monster_Hp - 25;
	    sw = false; 
	}
}
