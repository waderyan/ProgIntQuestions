
public class Permutation {

	private boolean[] used;
	private String in;
	private StringBuilder out = new StringBuilder();

	public Permutation(String str) {
		in = str;
		used = new boolean[in.length()];
	}

	public void permute() {
		if (out.length() == in.length()) {
			System.out.println(out);
			return;
		} 

		for (int i = 0; i < in.length(); i++) {
			if (used[i]) {
				continue;
			}

			out.append( in.charAt(i) );
			used[i] = true;
			permute();
			used[i] = false;
			out.setLength(out.length() - 1);
		}
	}

	public static void main(String[] args) {
		String word = args[0];
		Permutation perm = new Permutation(word);
		perm.permute();
	}

}