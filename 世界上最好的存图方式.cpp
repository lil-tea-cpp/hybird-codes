constexpr std::size_t max_vtces = 1uz << 11;

class	vtx {
public:
	std::vector<vtx*> to_;
} v[max_vtces];
