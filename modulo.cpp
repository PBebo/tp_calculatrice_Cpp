//--------------------------Modulo
/// \brief Fonction de modulo de deux nombre de type int32_t
///
///
/// \param operandeA est un entier sur 32 bits
/// \param operandeB est un entier sur 32 bits
/// \return Le modulo des deux entiers 32 bits saisie par l'utilisateur.
/// \sa modulo(int64_t, int64_t), modulo(float, float), modulo(double, double)
///
int32_t modulo(int32_t operandeA, int32_t operandeB)
{
	return operandeA % operandeB;
}

/// \brief Fonction de modulo de deux nombre de type int64_t
///
///
/// \param operandeA est un entier sur 64 bits
/// \param operandeB est un entier sur 64 bits
/// \return Le modulo des deux entiers 64 bits saisie par l'utilisateur.
/// \sa modulo(float, float), modulo(double, double), modulo(int32_t, int32_t)
///
int64_t modulo(int64_t operandeA, int64_t operandeB)
{
	return operandeA % operandeB;
}
