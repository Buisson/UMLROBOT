class Position{
	private:
		int x;
		int y;
	public:
		Position(int x,int y){
			this->x=x;
			this->y=y;
		}
		void setx(int set){x=set;}
		void sety(int set){y=set;}
		int getx(){return x;}
		int gety(){return y;}
};
