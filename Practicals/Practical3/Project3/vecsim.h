#ifndef vecsim_h
#define vecsim_h
class vecsim
{
	public:
		//constructor
		vecsim(double* v1, double* v2, int len);

		//return Euclidean distance between v1 & v2
		double Euclidean();
		//return Cosine similarity between v1 & v2
		double Cosine();
	
	private:
		double* vec1, * vec2;
		int vec_len;

};

#endif
