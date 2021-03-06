#pragma once

class GUIParams {
public:

	/* fluid params */
	int niter;
	float pho0;
	float g;
	float h;
	float dt;
	float lambda_eps;
	float delta_q;
	float k_corr;
	float n_corr;
	float k_boundaryDensity;
	float c_XSPH;

	/* renderer params */
	int kernel_r;
	float sigma_r;
	float sigma_z;
	int smooth_niter;
	int keep_edge;
	int blur_option;

	enum ShadeOption {
		Full = 0,
		Depth,
		Thick,
		Normal,
		Fresnel,
		Reflect,
		Refract,
		RefractBL
	};

	ShadeOption shading_option;
	
	static GUIParams& getInstance();

private:
	static GUIParams * instance;
};