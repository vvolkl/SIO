  /**Some basic functions for dumping events.
   * 
   * @author gaede
   * @version Mar 10, 2003
   * @see LCEvent
   */
#ifndef IMPL_LCTOOLS_H
#define IMPL_LCTOOLS_H 1

#include <iostream>

#include "EVENT/LCEvent.h" 
#include "EVENT/MCParticle.h" 


namespace IMPL{
  
  class LCTOOLS{
    
  public:

    /** Simple function to dump event contents to the screen.
     * Also demonstrates the access to event data through the EVENT interface.
     * This is only a short format - one line per collection.
     */
    static void dumpEvent(const EVENT::LCEvent* evt) ;

    /** Dumps the whole event to the screen, using the dedicated print functions
     * for the different collection types.
     */
    static void dumpEventDetailed(const EVENT::LCEvent* evt) ;

    /** Completely prints all MCParticles in the collection.
     */
    static void printMCParticles(const EVENT::LCCollection* col ) ;

    /** Completely prints all SimTrackerHits in the collection.
     */
    static void printSimTrackerHits(const EVENT::LCCollection* col ) ;

    /** Completely prints all SimCalorimeterHits in the collection.
     */
    static void printSimCalorimeterHits(const EVENT::LCCollection* col ) ;


    /** Prints daughter particles recursively.
     */
    static int printDaughterParticles(const EVENT::MCParticle* part, int index) ;



  }; // class
  
}; // namespace IMPL

#endif /* ifndef IMPL_LCTOOLS_H */