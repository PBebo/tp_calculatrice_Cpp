//--------------------------Division
/// \brief Fonction de division de deux nombre de type int32_t
///
///
/// \param operandeA est un entier sur 32 bits
/// \param operandeB est un entier sur 32 bits
/// \return La division des deux entiers 32 bits saisie par l'utilisateur.
/// \sa division(int64_t, int64_t), division(float, float), division(double, double)
///
int32_t division(int32_t operandeA, int32_t operandeB)
{
	return operandeA / operandeB;
}

/// \brief Fonction de division de deux nombre de type int64_t
///
///
/// \param operandeA est un entier sur 64 bits
/// \param operandeB est un entier sur 64 bits
/// \return La division des deux entiers 64 bits saisie par l'utilisateur.
/// \sa division(float, float), division(double, double), division(int32_t, int32_t)
///
int64_t division(int64_t operandeA, int64_t operandeB)
{
	return operandeA / operandeB;
}
	
/// \brief Fonction de division de deux nombre de type Float
///
///
/// \param operandeA est un Float
/// \param operandeB est un Float
/// \return La division des deux Float saisie par l'utilisateur.
/// \sa division(double, double), division(int32_t, int32_t), division(int64_t, int64_t)
///
float division(float operandeA, float operandeB)
{
	return operandeA / operandeB;
}
	
/// \brief Fonction de division de deux nombre de type Double
///
///
/// \param operandeA est un Double
/// \param operandeB est un Double
/// \return La division des deux Double saisie par l'utilisateur.
/// \sa division(int32_t, int32_t), division(int64_t, int64_t), division(float, float)
///	
double division(double operandeA, double operandeB)
{
	return operandeA * operandeB;
}
