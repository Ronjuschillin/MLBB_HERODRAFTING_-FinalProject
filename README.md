This MLBB Hero Drafting Console App is a C++ program that simulates the drafting phase of the popular game Mobile Legends: Bang Bang (MLBB),
where players select heroes based on their lanes and roles. 


  The drafting process involves:
   
    •	Interactive hero selection for the player’s team.
    
    •	Automated picks for the enemy team.
   
    •	Time-limited input with automatic fallback.
   
    •	Role-based drafting and lane assignment.
    
    •	Hero uniqueness enforcement to avoid duplicate picks.
    
    •	Formatted and color-coded output for better console readability.
    
    •	Unit testing using Google Test for reliability.
  
  **Key Features of MLBB Hero Drafting**
  
  1.	**Interactive Role and Hero Selection:**
     
    •	User is prompted to select a hero role (MARKSMAN, TANK, MAGE, ASSASSIN, FIGHTER, SUPPORT).
    
    •	Input validation for role and hero name with retries and fallbacks.
    
  2.	**Timeout Mechanism:**

    •	15-second timer for role selection.
    
    •	30-second timer for hero selection.
    
    •	Auto-picking mechanism when the user fails to respond or chooses invalid input.
    
 3.  **Lanes: The app covers 5 MLBB lanes:**
    
    •	EXP, Jungle, Mid, Gold, Roam
    
 4.  **Default Roles per Lane:**
 
    •	EXP → Fighter
    
    •	Jungle → Assassin
    
    •	Mid → Mage
    
    •	Gold → Marksman
    
    •	Roam → Tank


  5.	**Role-Based Hero Pool:**
     
    •	Heroes are fetched based on the selected role.
    
    •	Auto-pick chooses from the valid role's pool.
    
  6.	**Hero Uniqueness Enforcement:**
     
    •	Picks consider already-picked heroes to avoid duplicates.
    
  7.	**Team Assignment:**
     
    •	Heroes are assigned to BlueTeam or RedTeam based on pick turn.
    
    •	Each hero is placed into a specific lane (GOLD LANE, ROAM, MIDLANE, JUNGLE, EXP).
    
  8.	**Hero Display Info:**
     
    •	Each hero's info is shown after being picked using Hero::displayInfo().
    
  9.	**Enemy Auto-Pick:**

    •	Enemy team picks automatically after the user completes their pick.

    
  
  
   **Code Structure** 
   
  **File &	Purpose**
  
  **ColorUtil**

    Wraps SetConsoleTextAttribute() for color output
    
  **Hero + Subclasses**

    Inheritance structure to define hero roles and behavior

  **HeroFactory**

    Centralized factory to create heroes by role
    

   **Team**

    Manages mapping from lanes to heroes and formats them


  **Main.cpp**

    Orchestrates the drafting flow

  **GoogleTest.cpp**

    Unit tests for hero creation and factory integrity








    
    
  **Functionalities**
  
  **Feature & Description**
  
  **User Role Input (15s Timer)**	    
                                     
                                      The user is prompted to select a hero role (e.g., Fighter for EXP lane). 
                                      If invalid or time runs out, a fallback mechanism triggers.
                                  
                                  
  **Role Validation & Retry (5s)**	   
                                     
                                      If the user inputs an invalid role, they're prompted again briefly. 
                                      If still invalid or timeout occurs, the system auto-picks a default role.
                                  
                                  
  **Hero Name Input (30s Timer)**	    
                                     
                                      Once a role is confirmed, the user selects a hero name.
                                      If invalid or no input is given, the app auto-picks a valid hero from that role.
                                  
                                  
  **Auto-Picking System**	           
  
                                      The app automatically selects a hero when user input times out or is invalid,
                                      ensuring continuous flow.
                                  
                                  
  **Enemy Team AI Draft**	            
                                     
                                      After the user pick, the enemy team automatically drafts a hero from the remaining pool.
  
  
  **Formatted Console Output**	       
                                      
                                      Team compositions are shown in yellow with setw, setfill, and color formatting using Windows.h.
  
  
  **Hero Uniqueness Enforcement**	    
                                     
                                      Ensures no hero is selected more than once across both teams.
  
  
  **Role-based Hero Factory**	        
                                     
                                      Different heroes are categorized and created based on their role using a factory class.
  
  
  **Google Test Integration**	        
                                      
                                      Unit tests validate behavior of Hero, HeroFactory, and Team classes to ensure
                                      logic correctness and reliability.


                           
  
  **Design Patterns	Used**
  
  **Design Pattern & Usage**
  
  **Factory Pattern**      	
                               
                               Implemented in HeroFactory to create and manage role-based hero objects (createHero(), getHeroPool()).

  
  **Strategy Pattern**	     
                              
                               Picking behavior varies depending on user input or timeout.
                               These picking strategies can be encapsulated as separate algorithms (manual pick vs. auto-pick).
                        
                        
  **Template Method**       
                              
                               The draft process follows a fixed algorithm (prompt → validate → retry → pick),
                               with variable steps filled in (e.g., auto vs. manual pick).
  



                        
  **SOLID Principles Applied**
  
  **Principle & Description**
  
 **Single Responsibility**	     
                               
                               Each class has one well-defined purpose: Hero represents data, HeroFactory manages
                               hero creation, and Team manages team composition.

                            
  **Open/Closed**	              
                              
                               The app is open for extension (e.g., adding new hero roles or timers)
                               without modifying existing logic.
  
  
  
  
