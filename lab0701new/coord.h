#ifndef COORD_H
#define COORD_H

//struct declaration 
struct point3D {
	int idRecord;
	double xCoord;
	double yCoord;
	double zCoord;
	char order;
};

//functions declaration 
void get_point (point3D &point);
void print_point(point3D &point);
double spatial_dist(point3D point1, point3D point2);
double plani_dist(point3D point1, point3D point2);
double ht_diff(point3D point1, point3D point2);
double azimuth(point3D point1, point3D point2);

#endif
