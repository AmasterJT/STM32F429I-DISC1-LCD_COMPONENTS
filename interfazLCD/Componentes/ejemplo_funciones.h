//------------------------------------------------------------------------------------------------------------
// funciones: ejemplo de graficas [matrices de pixeles]

  int sine_pixel[100] = {40, 42, 45, 47, 49, 52, 54, 57, 59, 61,
  				 63, 65, 67, 69, 70, 72, 73, 75, 76, 77,
  				 78, 78, 79, 79, 79, 80, 79, 79, 79, 78,
  				 78, 77, 76, 75, 73, 72, 70, 69, 67, 65,
  				 63, 61, 59, 57, 54, 52, 49, 47, 45, 42,
  				 40, 38, 35, 33, 31, 28, 26, 23, 21, 19,
  				 17, 15, 13, 11, 10, 8,  7,  5,  4,  3,
  				 2,  2,  1,  1,  0,  0,  1,  1,  1,  2,
  				 2,  3,  4,  5,  7,  8,  10, 11, 13, 15,
  				 17, 19, 21, 23, 26, 28, 31, 33, 35, 38};

  int sine120_pixel[100] = {74, 73, 71, 70, 68, 66, 64, 62, 60, 58,
						    56, 53, 51, 49, 46, 44, 41, 39, 36, 34,
						    31, 29, 26, 24, 22, 19, 17, 15, 13, 12,
						    10, 8, 7, 5, 4, 3, 3, 2, 2, 1,
						    1, 0, 0, 1, 1, 2, 2, 2, 3, 4,
						    5, 6, 8, 9, 11, 13, 15, 17, 19, 21,
						    23, 26, 28, 30, 33, 35, 38, 40, 43, 45,
						    48, 50, 53, 55, 57, 60, 62, 64, 66, 67,
						    69, 71, 72, 74, 75, 76, 77, 78, 78, 79,
						    79, 79, 79, 79, 79, 79, 78, 77, 76, 75};

  int sine240_pixel[100] = {5, 4, 3, 3, 2, 2, 1, 1, 0, 0,
		 				    1, 1, 2, 2, 3, 3, 4, 5, 7, 8,
		 				    10, 12, 13, 15, 17, 20, 22, 24, 26, 29,
		 				    31, 34, 36, 39, 41, 44, 46, 49, 51, 53,
		 				    56, 58, 60, 62, 64, 66, 68, 70, 71, 73,
		 				    74, 75, 76, 77, 78, 79, 79, 79, 79, 79,
		 				    79, 79, 78, 78, 77, 76, 75, 74, 72, 71,
		 				    69, 67, 66, 64, 62, 60, 57, 55, 53, 50,
		 				    48, 45, 43, 40, 38, 35, 33, 30, 28, 26,
		 				    23, 21, 19, 17, 15, 13, 11, 9, 8, 6};

  //------------------------------------------------------------------------------------------------------------
  // funciones: ejemplo de graficas

  float sine_uni[100] = {0.00, 0.06, 0.13, 0.19, 0.25, 0.31, 0.37, 0.43, 0.48, 0.54,
						 0.59, 0.64, 0.68, 0.73, 0.77, 0.81, 0.84, 0.88, 0.90, 0.93,
						 0.95, 0.97, 0.98, 0.99, 1.00, 1.00, 1.00, 0.99, 0.98, 0.97,
						 0.95, 0.93, 0.90, 0.88, 0.84, 0.81, 0.77, 0.73, 0.68, 0.64,
						 0.59, 0.54, 0.48, 0.43, 0.37, 0.31, 0.25, 0.19, 0.13, 0.06,
						 -0.00, -0.06, -0.13, -0.19, -0.25, -0.31, -0.37, -0.43, -0.48,  -0.54,
						 -0.59, -0.64, -0.68, -0.73, -0.77, -0.81, -0.84, -0.88, -0.90, -0.93,
						 -0.95, -0.97, -0.98, -0.99, -1.00, -1.00, -1.00, -0.99, -0.98, -0.97,
						 -0.95, -0.93, -0.90, -0.88, -0.84, -0.81, -0.77, -0.73, -0.68, -0.64,
						 -0.59, -0.54, -0.48, -0.43, -0.37, -0.31, -0.25, -0.19, -0.13, -0.06};

  float sine120[100] = {0.87, 0.83, 0.80, 0.76, 0.71, 0.67, 0.62, 0.57, 0.52, 0.46,
					    0.41, 0.35, 0.29, 0.23, 0.17, 0.10, 0.04, -0.02, -0.08, -0.15,
					    -0.21, -0.27, -0.33, -0.39, -0.44, -0.50, -0.55, -0.60, -0.65, -0.70,
					    -0.74, -0.78, -0.82, -0.86, -0.89, -0.91, -0.94, -0.96, -0.97, -0.99,
					    -0.99, -1.00, -1.00, -1.00, -0.99, -0.98, -0.96, -0.94, -0.92, -0.90,
					    -0.87, -0.83, -0.80, -0.76, -0.71, -0.67, -0.62, -0.57, -0.52, -0.46,
					    -0.41, -0.35, -0.29, -0.23, -0.17, -0.10, -0.04, 0.02, 0.08, 0.15,
					    0.21, 0.27, 0.33, 0.39, 0.44, 0.50, 0.55, 0.60, 0.65, 0.70,
					    0.74, 0.78, 0.82, 0.86, 0.89, 0.91, 0.94, 0.96, 0.97, 0.99,
					    0.99, 1.00, 1.00, 1.00, 0.99, 0.98, 0.96, 0.94, 0.92, 0.90};

 float sine240[100] = {-0.87, -0.90, -0.92, -0.94, -0.96, -0.98, -0.99, -1.00, -1.00, -1.00,
					   -0.99, -0.99, -0.97, -0.96, -0.94, -0.91, -0.89, -0.86, -0.82, -0.78,
					   -0.74, -0.70, -0.65, -0.60, -0.55, -0.50, -0.44, -0.39, -0.33, -0.27,
					   -0.21, -0.15, -0.08, -0.02, 0.04, 0.10, 0.17, 0.23, 0.29, 0.35,
					   0.41, 0.46, 0.52, 0.57, 0.62, 0.67, 0.71, 0.76, 0.80, 0.83,
					   0.87, 0.90, 0.92, 0.94, 0.96, 0.98, 0.99, 1.00, 1.00, 1.00,
					   0.99, 0.99, 0.97, 0.96, 0.94, 0.91, 0.89, 0.86, 0.82, 0.78,
					   0.74, 0.70, 0.65, 0.60, 0.55, 0.50, 0.44, 0.39, 0.33, 0.27,
					   0.21, 0.15, 0.08, 0.02, -0.04, -0.10, -0.17, -0.23, -0.29, -0.35,
					   -0.41, -0.46, -0.52, -0.57, -0.62, -0.67, -0.71, -0.76, -0.80, -0.83};


 float sine_uni_400[400] = {
		 0.00, 0.02, 0.03, 0.05, 0.06, 0.08, 0.09, 0.11, 0.13, 0.14,
		 0.16, 0.17, 0.19, 0.20, 0.22, 0.23, 0.25, 0.26, 0.28, 0.29,
		 0.31, 0.32, 0.34, 0.35, 0.37, 0.38, 0.40, 0.41, 0.43, 0.44,
		 0.45, 0.47, 0.48, 0.50, 0.51, 0.52, 0.54, 0.55, 0.56, 0.58,
		 0.59, 0.60, 0.61, 0.63, 0.64, 0.65, 0.66, 0.67, 0.68, 0.70,
		 0.71, 0.72, 0.73, 0.74, 0.75, 0.76, 0.77, 0.78, 0.79, 0.80,
		 0.81, 0.82, 0.83, 0.84, 0.84, 0.85, 0.86, 0.87, 0.88, 0.88,
		 0.89, 0.90, 0.90, 0.91, 0.92, 0.92, 0.93, 0.94, 0.94, 0.95,
		 0.95, 0.96, 0.96, 0.96, 0.97, 0.97, 0.98, 0.98, 0.98, 0.99,
		 0.99, 0.99, 0.99, 0.99, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00,
		 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 1.00, 0.99, 0.99, 0.99,
		 0.99, 0.99, 0.98, 0.98, 0.98, 0.97, 0.97, 0.96, 0.96, 0.96,
		 0.95, 0.95, 0.94, 0.94, 0.93, 0.92, 0.92, 0.91, 0.90, 0.90,
		 0.89, 0.88, 0.88, 0.87, 0.86, 0.85, 0.84, 0.84, 0.83, 0.82,
		 0.81, 0.80, 0.79, 0.78, 0.77, 0.76, 0.75, 0.74, 0.73, 0.72,
		 0.71, 0.70, 0.68, 0.67, 0.66, 0.65, 0.64, 0.63, 0.61, 0.60,
		 0.59, 0.58, 0.56, 0.55, 0.54, 0.52, 0.51, 0.50, 0.48, 0.47,
		 0.45, 0.44, 0.43, 0.41, 0.40, 0.38, 0.37, 0.35, 0.34, 0.32,
		 0.31, 0.29, 0.28, 0.26, 0.25, 0.23, 0.22, 0.20, 0.19, 0.17,
		 0.16, 0.14, 0.13, 0.11, 0.09, 0.08, 0.06, 0.05, 0.03, 0.02,
		 -0.00, -0.02, -0.03, -0.05, -0.06, -0.08, -0.09, -0.11, -0.13, -0.14,
		 -0.16, -0.17, -0.19, -0.20, -0.22, -0.23, -0.25, -0.26, -0.28, -0.29,
		 -0.31, -0.32, -0.34, -0.35, -0.37, -0.38, -0.40, -0.41, -0.43, -0.44,
		 -0.45, -0.47, -0.48, -0.50, -0.51, -0.52, -0.54, -0.55, -0.56, -0.58,
		 -0.59, -0.60, -0.61, -0.63, -0.64, -0.65, -0.66, -0.67, -0.68, -0.70,
		 -0.71, -0.72, -0.73, -0.74, -0.75, -0.76, -0.77, -0.78, -0.79, -0.80,
		 -0.81, -0.82, -0.83, -0.84, -0.84, -0.85, -0.86, -0.87, -0.88, -0.88,
		 -0.89, -0.90, -0.90, -0.91, -0.92, -0.92, -0.93, -0.94, -0.94, -0.95,
		 -0.95, -0.96, -0.96, -0.96, -0.97, -0.97, -0.98, -0.98, -0.98, -0.99,
		 -0.99, -0.99, -0.99, -0.99, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00,
		 -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -1.00, -0.99, -0.99, -0.99,
		 -0.99, -0.99, -0.98, -0.98, -0.98, -0.97, -0.97, -0.96, -0.96, -0.96,
		 -0.95, -0.95, -0.94, -0.94, -0.93, -0.92, -0.92, -0.91, -0.90, -0.90,
		 -0.89, -0.88, -0.88, -0.87, -0.86, -0.85, -0.84, -0.84, -0.83, -0.82,
		 -0.81, -0.80, -0.79, -0.78, -0.77, -0.76, -0.75, -0.74, -0.73, -0.72,
		 -0.71, -0.70, -0.68, -0.67, -0.66, -0.65, -0.64, -0.63, -0.61, -0.60,
		 -0.59, -0.58, -0.56, -0.55, -0.54, -0.52, -0.51, -0.50, -0.48, -0.47,
		 -0.45, -0.44, -0.43, -0.41, -0.40, -0.38, -0.37, -0.35, -0.34, -0.32,
		 -0.31, -0.29, -0.28, -0.26, -0.25, -0.23, -0.22, -0.20, -0.19, -0.17,
		 -0.16, -0.14, -0.13, -0.11, -0.09, -0.08, -0.06, -0.05, -0.03, -0.02
 };


 float sine5V[100] ={
		 0.00, 0.31, 0.63, 0.94, 1.24, 1.55, 1.84, 2.13, 2.41, 2.68,
		 2.94, 3.19, 3.42, 3.64, 3.85, 4.05, 4.22, 4.38, 4.52, 4.65,
		 4.76, 4.84, 4.91, 4.96, 4.99, 5.00, 4.99, 4.96, 4.91, 4.84,
		 4.76, 4.65, 4.52, 4.38, 4.22, 4.05, 3.85, 3.64, 3.42, 3.19,
		 2.94, 2.68, 2.41, 2.13, 1.84, 1.55, 1.24, 0.94, 0.63, 0.31,
		 -0.00, -0.31, -0.63, -0.94, -1.24, -1.55, -1.84, -2.13, -2.41, -2.68,
		 -2.94, -3.19, -3.42, -3.64, -3.85, -4.05, -4.22, -4.38, -4.52, -4.65,
		 -4.76, -4.84, -4.91, -4.96, -4.99, -5.00, -4.99, -4.96, -4.91, -4.84,
		 -4.76, -4.65, -4.52, -4.38, -4.22, -4.05, -3.85, -3.64, -3.42, -3.19,
		 -2.94, -2.68, -2.41, -2.13, -1.84, -1.55, -1.24, -0.94, -0.63, -0.31
 };


 float sine10V[100] = {
		 0.00, 0.63, 1.25, 1.87, 2.49, 3.09, 3.68, 4.26, 4.82, 5.36,
		 5.88, 6.37, 6.85, 7.29, 7.71, 8.09, 8.44, 8.76, 9.05, 9.30,
		 9.51, 9.69, 9.82, 9.92, 9.98, 99.00, 9.98, 9.92, 9.82, 9.69,
		 9.51, 9.30, 9.05, 8.76, 8.44, 8.09, 7.71, 7.29, 6.85, 6.37,
		 5.88, 5.36, 4.82, 4.26, 3.68, 3.09, 2.49, 1.87, 1.25, 0.63,
		 -0.00, -0.63, -1.25, -1.87, -2.49, -3.09, -3.68, -4.26, -4.82, -5.36,
		 -5.88, -6.37, -6.85, -7.29, -7.71, -8.09, -8.44, -8.76, -9.05, -9.30,
		 -9.51, -9.69, -9.82, -9.92, -9.98, -10.00, -9.98, -9.92, -9.82, -9.69,
		 -9.51, -9.30, -9.05, -8.76, -8.44, -8.09, -7.71, -7.29, -6.85, -6.37,
		 -5.88, -5.36, -4.82, -4.26, -3.68, -3.09, -2.49, -1.87, -1.25, -0.63

 };


 float sine10v_400[400] = {0.00, 0.16, 0.31, 0.47, 0.63, 0.78, 0.94, 1.10, 1.25, 1.41,
		 1.56, 1.72, 1.87, 2.03, 2.18, 2.33, 2.49, 2.64, 2.79, 2.94,
		 3.09, 3.24, 3.39, 3.53, 3.68, 3.83, 3.97, 4.12, 4.26, 4.40,
		 4.54, 4.68, 4.82, 4.95, 5.09, 5.22, 5.36, 5.49, 5.62, 5.75,
		 5.88, 6.00, 6.13, 6.25, 6.37, 6.49, 6.61, 6.73, 6.85, 6.96,
		 7.07, 7.18, 7.29, 7.40, 7.50, 7.60, 7.71, 7.80, 7.90, 8.00,
		 8.09, 8.18, 8.27, 8.36, 8.44, 8.53, 8.61, 8.69, 8.76, 8.84,
		 8.91, 8.98, 9.05, 9.11, 9.18, 9.24, 9.30, 9.35, 9.41, 9.46,
		 9.51, 9.56, 9.60, 9.65, 9.69, 9.72, 9.76, 9.79, 9.82, 9.85,
		 9.88, 9.90, 9.92, 9.94, 9.96, 9.97, 9.98, 9.99, 10.00, 10.00,
		 10.00, 10.00, 10.00, 9.99, 9.98, 9.97, 9.96, 9.94, 9.92, 9.90,
		 9.88, 9.85, 9.82, 9.79, 9.76, 9.72, 9.69, 9.65, 9.60, 9.56,
		 9.51, 9.46, 9.41, 9.35, 9.30, 9.24, 9.18, 9.11, 9.05, 8.98,
		 8.91, 8.84, 8.76, 8.69, 8.61, 8.53, 8.44, 8.36, 8.27, 8.18,
		 8.09, 8.00, 7.90, 7.80, 7.71, 7.60, 7.50, 7.40, 7.29, 7.18,
		 7.07, 6.96, 6.85, 6.73, 6.61, 6.49, 6.37, 6.25, 6.13, 6.00,
		 5.88, 5.75, 5.62, 5.49, 5.36, 5.22, 5.09, 4.95, 4.82, 4.68,
		 4.54, 4.40, 4.26, 4.12, 3.97, 3.83, 3.68, 3.53, 3.39, 3.24,
		 3.09, 2.94, 2.79, 2.64, 2.49, 2.33, 2.18, 2.03, 1.87, 1.72,
		 1.56, 1.41, 1.25, 1.10, 0.94, 0.78, 0.63, 0.47, 0.31, 0.16,
		 -0.00, -0.16, -0.31, -0.47, -0.63, -0.78, -0.94, -1.10, -1.25, -1.41,
		 -1.56, -1.72, -1.87, -2.03, -2.18, -2.33, -2.49, -2.64, -2.79, -2.94,
		 -3.09, -3.24, -3.39, -3.53, -3.68, -3.83, -3.97, -4.12, -4.26, -4.40,
		 -4.54, -4.68, -4.82, -4.95, -5.09, -5.22, -5.36, -5.49, -5.62, -5.75,
		 -5.88, -6.00, -6.13, -6.25, -6.37, -6.49, -6.61, -6.73, -6.85, -6.96,
		 -7.07, -7.18, -7.29, -7.40, -7.50, -7.60, -7.71, -7.80, -7.90, -8.00,
		 -8.09, -8.18, -8.27, -8.36, -8.44, -8.53, -8.61, -8.69, -8.76, -8.84,
		 -8.91, -8.98, -9.05, -9.11, -9.18, -9.24, -9.30, -9.35, -9.41, -9.46,
		 -9.51, -9.56, -9.60, -9.65, -9.69, -9.72, -9.76, -9.79, -9.82, -9.85,
		 -9.88, -9.90, -9.92, -9.94, -9.96, -9.97, -9.98, -9.99, -10.00, -10.00,
		 -10.00, -10.00, -10.00, -9.99, -9.98, -9.97, -9.96, -9.94, -9.92, -9.90,
		 -9.88, -9.85, -9.82, -9.79, -9.76, -9.72, -9.69, -9.65, -9.60, -9.56,
		 -9.51, -9.46, -9.41, -9.35, -9.30, -9.24, -9.18, -9.11, -9.05, -8.98,
		 -8.91, -8.84, -8.76, -8.69, -8.61, -8.53, -8.44, -8.36, -8.27, -8.18,
		 -8.09, -8.00, -7.90, -7.80, -7.71, -7.60, -7.50, -7.40, -7.29, -7.18,
		 -7.07, -6.96, -6.85, -6.73, -6.61, -6.49, -6.37, -6.25, -6.13, -6.00,
		 -5.88, -5.75, -5.62, -5.49, -5.36, -5.22, -5.09, -4.95, -4.82, -4.68,
		 -4.54, -4.40, -4.26, -4.12, -3.97, -3.83, -3.68, -3.53, -3.39, -3.24,
		 -3.09, -2.94, -2.79, -2.64, -2.49, -2.33, -2.18, -2.03, -1.87, -1.72,
		 -1.56, -1.41, -1.25, -1.10, -0.94, -0.78, -0.63, -0.47, -0.31, -0.16
 };
