class Figer : public Etat {
	private:
		Etat& dernierEtat;
		static Figer& _instance = Figer();

	public:
		Etat& figer();
		Etat& repartir();
		static Etat& getInstance();
};
