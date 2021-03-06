/*PlaneObject

*/

#ifndef PLANE_OBJECT_H
#define PLANE_OBJECT_H

#include "sim/TelemetryUpdate.h"
#include "sim/standardDefs.h"
#include "sim/standardFuncs.h"

namespace sim {

	class PlaneObject {

	public:
		/*
		Default constructor. Sets everything to zero. 
		*/
		PlaneObject(void);
		
		/*
		Explicit value constructor: Takes a collision radius and a telemetry update and creates a new PlaneObject.
		*/
		PlaneObject(double cRadius, const sim::TelemetryUpdate &msg);

		/*mutator functions*/
		void setID(int id);
		void setPreviousLoc(double lat, double lon, double alt);
		void setCurrentLoc(double lat, double lon, double alt);
		void setTargetBearing(double tBearing);		/* set bearing to destination */
		void setCurrentBearing(double cBearing); 	/* set current bearing in the air */
		void setSpeed(double speed);
		void setDestination(const sim::waypoint &destination);

/*	ATTEMPT #1
		//zigzagging
		void setLastGreatestThreat(int lgt);
		void setLastZEM(int ZEM);
		void setLastZEMTime();
*/

/////////////////////// * ATTEMPT 2 * ///////////////////////////////
		void setTwoAgoThreatID(int ID);
		void setTwoAgoZEM(double ZEM);
		void setTwoAgoTgo(double Tgo);

		void setOneAgoThreatID(int ID);
		void setOneAgoZEM(double ZEM);
		void setOneAgoTgo(double Tgo);

		void setCurrentThreatID(int ID);
		void setCurrentZEM(double ZEM);
		void setCurrentTgo(double Tgo);

		void setAntiZigzag(int zig);
/////////////////////////////////////////////////////////////////////

		void updateTime(void); //changed function name from "update" to "updateTime"

		/* Update the plane's data members with the information contained within the telemetry update */
		void update(const sim::TelemetryUpdate &msg);

		/* Accessor functions: Allow the client to access the plane's id, altitude, bearing, spped, etc. */
		int getID(void) const;
		sim::coordinate getPreviousLoc(void) const;
		sim::coordinate getCurrentLoc(void) const;
		double getTargetBearing(void) const;		/* get target bearing */
		double getCurrentBearing(void) const;		/* get current bearing in the air */
		double getSpeed(void) const;
		double getLastUpdateTime(void) const;
		sim::waypoint getDestination(void) const;


/*	ATTEMPT #1
		//zigzagging
		int getLastGreatestThreat(void) const;
		int getLastZEM(void) const;
		double getLastZEMTime(void) const;
		
		
*/

/////////////////////// * ATTEMPT 2 * ///////////////////////////////
		int getTwoAgoThreatID(void) const;
		double getTwoAgoZEM(void) const;
		double getTwoAgoTgo(void) const;

		int getOneAgoThreatID(void) const;
		double getOneAgoZEM(void) const;
		double getOneAgoTgo(void) const;

		int getCurrentThreatID(void) const;
		double getCurrentZEM(void) const;
		double getCurrentTgo(void) const;
		int getAntiZigzag(void) const;
		
		bool isBehind(const sim::PlaneObject& plane, bool turnRight) const;
/////////////////////////////////////////////////////////////////////


		/* Find distance between this plane and another plane */
		double findDistance(const PlaneObject& plane) const;
		/* Find distance between this plane and another plane's latitude/longitude */
		double findDistance(double lat2, double lon2) const;

		/* Find Cartesian angle between this plane and another plane */
		double findAngle(const PlaneObject& plane) const;
		/* Find Cartesian angle between this plane and another plane's latitude/longitude */
		double findAngle(double lat2, double lon2) const;

		/* Overloaded equality operator */
		PlaneObject& operator=(const PlaneObject& pobj);

		/* Returns true if a plane object is within the cRadius meters of this plane object, false otherwise */
		bool isColliding(const PlaneObject& planeObj) const;

	private:
		/* Private data members */
		int id;
		double collisionRadius;
		double targetBearing;		/* get bearing to destination */
		double currentBearing;		/* get current bearing in the air */
		double speed;
		double lastUpdateTime;
		sim::coordinate previousLoc;	/*used to calculate currentBearing*/
		sim::coordinate currentLoc;
		sim::waypoint destination;
		
/*	ATTEMPT #1
		//zigzagging
		int lastGreatestThreat;
		int lastZEM;
		double lastZEMTime;
*/

/////////////////////// * ATTEMPT 2 * ///////////////////////////////
		int twoAgoThreatID;
		double twoAgoZEM;
		double twoAgoTgo;

		int oneAgoThreatID;
		double oneAgoZEM;
		double oneAgoTgo;

		int currentThreatID;
		double currentZEM;
		double currentTgo;
		int antiZigzag;
////////////////////////////////////////////////////////////////////
	};
};


#endif
