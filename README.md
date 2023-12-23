# Frost's Black and White 2 Editor

Featured here is the editor program that I made and use to hack pokemon Black and White 2.

The main editor contains several features, such as pokemon, moves, trainers, and even script editing. It also contains a few special game modes for those looking for new challenge runs and a custom patcher for transfering hacks efficiently.

The Lite version of the editor strips away the more complex features if you are only looking to apply patches or custom game modes.

Note that this has not been thoroughly tested outside of personal use for my own rom hacks. There will always be the possibly of the editor crashing or breaking a rom if it is not used as intended.

# Main Editor Features

__Pokemon Editor:__ Lets you edit the base stats, movesets, tms, and evolutions of a pokemon. Also lets you modify the sprite palette of a pokemon. Palette editing is less polished, so use with caution.

__Move Editor:__ Lets you edit the data of attacks such as damage, type, and extra effects. You can also change the name and description of moves and modify their animations to some extent. BW2 doesn't like adding more moves to the game, but this editor is capable of creating entirely new moves by replacing existing ones.

__Text Editor:__ Lets you edit in game text including story text and misc text.

__Trainer Editor:__ Lets you modify trainers and their pokemon. Also allows adding trainers. Keep in mind to add trainers, you must also add text fields for their name and dialogue as well as an npc to trigger the battle.

__Script Editor:__ Lets you edit the scripts that operate in game cutscenes. This tends to break busy areas, so stick to safer areas like houses. Scripting is very complicated, so you shouldn't mess with this if you don't know what you are doing. You can learn some basics of scripting here: https://projectpokemon.org/home/forums/topic/25852-b2w2-scripting-thread/
You can also import C scripts with the proper formatting. Check the command headers and example code for how to use

__Overworld Editor:__ Allows you to add, remove, or modify npcs, warps, and triggers. This is also somewhat complicated, so do your research before using this feature. This editor is also useful for locating certain script or encounter files.

__Encounter Editor:__ Lets you edit the pokemon encounter pools throughout the game. This editor condenses slots into a list of potential encounters for ease of use. Just remember that the groups you assign must still fit neatly into the game's slots. For land encounters, the slots are: 20%, 20%, 10%, 10%, 10%, 10%, 5%, 5%, 4%, 4%, 1%, 1%. For water encounters, the slots are: 60%, 30%, 5%, 4%, 1%.

__Shop Editor:__ Lets you modify the contents of in game shops. Removing items from shops is kind of buggy.

__Patching:__ You can create and apply patches to send other people hacks. Normally, the patch will include data from all of the NARC files you have loaded. You can choose to exclude certain NARCs to reduce the file size since NARC sizes are not created equal, and some are significantly bigger than others.

__Custom Game Modes:__ These use blanket statements to apply special rules to the game. You can read more about them in the Lite version of the editor.

__NARC Replace:__ NARCs are a special file type used to store data in roms. They are also what the editor works with behind the scenes. This feature lets you replace an entire NARC file with the same one from another rom. This may come in handy if you broke your rom and you don't want to revert everything to a previous version. You can see what all of the NARCs are here: https://projectpokemon.org/home/docs/gen-5/b2w2-file-system-r8/
There is also a similar functionality for replacing pokemon icons and sounds. I wouldn't suggest using this.

__Auto Loading:__ A simple quality of life feature that will automatically load the given rom whenever you start the editor.

# Custom Gamemodes

## Type Swap

A custom gamemode that systematically replaces the types of every pokemon and move for a new type. You can create your own type mapping, use one of a few presets, or randomize the types.

## Preset Moves

A randomizer that gives every pokemon a set number of randomly chosen moves.

## Rotation/Triple Battle

Sets all single battle trainers to be rotation or triple battles. Trainers with one pokemon are unchanged. Trainers with two pokemon have one of them copied

## Slay the Spoink

This is a custom gamemode inspired by Slay the Spire which drastically changes how the game is played. It can be applied through either the main editor or lite editor. This hack replaces the main story entirely. Instead, you fight through randomly generated rooms that progressively get stronger. Every 12 rooms, you'll fight a boss, ending with either Iris or Ghetsis. The editor lets you choose what battle type will primarily appear. If you choose none, it will default to single battles.

Along the way, you'll choose which path you want to take by talking to the npcs at the top of the room. Your options may include a trainer to fight, a ranger who lets you catch a wild pokemon, a nurse who will heal you, a shop to buy things, or an item you can pick up. You'll have to plan your route carefully to survive each floor while raising your team to keep up with the level curve.

After applying the hack to your rom, start by saving your run right away. Every time you want to start a new run, you'll have to reapply the hack with the editor, but you can restart the run from this save. For each run, you'll start by talking to your mom. She will give you a starter and a few items and transport your to the first room. From there you will progress through each room by interacting with the NPC in front of you, then choosing one of the NPCs in the back who will take you to the next room. If you white out, you lose, and you have to restart the run.

# NCB2bw2Patch

This is the main rom hack for black 2 (untested for white 2) that I made the editor for. It features revamped trainer battles, pokemon reworks, and massively expanded route encounters all specifically designed with a nuzzlocke and level caps in mind while keeping the core of the game intact. You can apply this patch to a vanilla rom (which is not provided) and try it yourself if you are interested in a challenge. This is also compatable with Slay the Spoink, helping make several pokemon stronger and more interesting.

There are a few major additions to the progression of this rom hack:

First, before you meet Bianca to receive your starter, You can enter the house to the right of the lookout and talk to the ditto there. It will give you a random starter from any generation. After receiving your starter, you can go back to Bianca and continue as normal. You still have to get your usual starter to progress the story. In a typical run, I pick the starter with the same element as the one ditto gave me, (this is important so your rival gets the right starter) and release it after the first rival battle.
After you complete the quest in Flocessy Ranch. Going north of the trainer school into Pledge Grove, you'll find a scientist studying the rock formation. He is a difficult optional trainer that you can fight before the first gym. Beating him will reward you with a fishing rod which can be used to get extra early game encounters in Aspertia City and Virbank City. The rest of the game plays out as normal.
After you beat the first gym, there's an optional fight with Alder with a powerful reward that can only be fought before you get the second gym badge.
Pinwheel Forest and Nacrene City are now accessible during the game. Keep in mind there are many high level trainers here. You are meant to start exploring these areas before you beat the bug gym and come back after you beat it.
There is an optional story event in Nacrene City where you fight Lenora and Cheren in a double battle. This also has a strong reward for beating it.
Clay Tunnel is also accessible now

Keep in mind this hack is extremely difficult. You shouldn't expect to beat it on your first few tries, but the increased pokemon variety should ensure that no two runs feel the same. Also the pokemon were balanced with strict level caps in mind, so I highly suggest following them. The level caps are as follows:

Flocessy Ranch Rival - 9

Aspertia Gym - 14

Alder Fight (optional) - 17

Virbank Gym - 20

Castelia Gym - 26

Lenora / Cheren Fight (optional) - 30

Nimbasa Gym - 32

Driftveil Gym - 36

Mistralton Gym - 42

Undella Rival - 45

Oppelucid Gym - 50

Humilau Gym - 56

Zinzolin and Colress - 62

Ghetsis - 64

Elite 4 - 70

Champion - 72

Finally, note that this hack is still in development. The current version is 0.15.0, which has the main story progression mostly complete. New story content is being added gradually as I see fit. Some side area trainers might have been missed, there is no post game, and the Kyurem fight before Ghetsis is underleveled.

# Some notable issues with the editor:

The editor may not be compatible with some other editors. Attempting to use this in conjunction with another editor to make a single hack likely won't work.

Script and overworld editing is unstable when working with existing story related elements. While these tools are very powerful and can do a lot in terms of writing custom scenes, even working in the same areas as certain cutscenes may break them.

The patch files are specifically made to work with the editor. As such, they won't work with any other patching system.

The loading bar is janky. When you open or save a rom, wait for the confirmation message before you start touching things.
