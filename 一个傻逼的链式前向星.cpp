constexpr std::size_t k_max_vtces = 1uz << 11;

class	edge;

class	vtx {
public:
	std::size_t to_;
};

class	edge {
public:
	vtx *g_;
	std::size_t nxt_;
};

vtx v[k_max_vtces];
std::vector<edge> e(1uz);

void	add_edge(vtx *x, vtx *y) {
	e.emplace_back(y, x->to_);
	x->to_ = e.size() - 1uz;
}
