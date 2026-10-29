constexpr std::size_t k_max_vtces = 1uz << 11;

class	vtx {
public:
	std::vector<vtx*> to_;
} v[k_max_vtces];
